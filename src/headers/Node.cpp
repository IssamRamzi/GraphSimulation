#include "Node.h"
#include "raylib.h"

std::vector<Node> Node::nodes;
std::vector<std::pair<Node*, Node*>> Node::links;
std::vector<Node*> Node::link_vector;
bool Node::can_create = true;

static const int DEFAULT_RADIUS = 30;
static const int DEFAULT_FONT_SIZE = 25;
static const Color DEFAULT_COLOR = BLACK;
static const int MINIMUM_DISTANCE = 50;

// Constructor: Initializes a Node with a given value
Node::Node(int value)
        : value_int(value), radius(DEFAULT_RADIUS), fontSize(DEFAULT_FONT_SIZE), color(DEFAULT_COLOR) {
    value_str = std::to_string(value);
}

// Constructor: Initializes a Node with a given value and position
Node::Node(int value, Vector2 position)
        : value_int(value), position(position), radius(DEFAULT_RADIUS), fontSize(DEFAULT_FONT_SIZE), color(DEFAULT_COLOR) {
    value_str = std::to_string(value);
}

// Constructor: Initializes a Node with a given value, position, and radius
Node::Node(int value, Vector2 position, int radius)
        : value_int(value), position(position), radius(radius), fontSize(DEFAULT_FONT_SIZE), color(DEFAULT_COLOR) {
    value_str = std::to_string(value);
}

// Constructor: Initializes a Node with a given value, position, and color
Node::Node(int value, Vector2 position, Color color)
        : value_int(value), position(position), radius(DEFAULT_RADIUS), fontSize(DEFAULT_FONT_SIZE), color(color) {
    value_str = std::to_string(value);
}

// Constructor: Initializes a Node with a given value, position, radius, and color
Node::Node(int value, Vector2 position, int radius, Color color)
        : value_int(value), position(position), radius(radius), fontSize(DEFAULT_FONT_SIZE), color(color) {
    value_str = std::to_string(value);
}

// Draws the Node on the screen
void Node::draw_node() {
    DrawCircleLines(position.x, position.y, radius, color);
    std::string valueStr = std::to_string(value_int);
    int textWidth = MeasureText(valueStr.c_str(), fontSize);
    int textX = position.x - textWidth / 2;
    int textY = position.y - fontSize / 2;

    DrawText(valueStr.c_str(), textX, textY, fontSize, BLACK);
}

// Handles the creation of new Nodes based on mouse input
void Node::create_node() {
    for (const Node& node : nodes) {
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
            Vector2 mouse_pos = GetMousePosition();
            if (mouse_pos.x <= node.position.x + node.radius + MINIMUM_DISTANCE && mouse_pos.x >= node.position.x - node.radius - MINIMUM_DISTANCE &&
                mouse_pos.y <= node.position.y + node.radius + MINIMUM_DISTANCE && mouse_pos.y >= node.position.y - node.radius - MINIMUM_DISTANCE) {
//                std::cout << "Can't create here" << std::endl;
                can_create = false;
                return;
            }
            else can_create = true;
        }
    }

    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
        int key = GetCharPressed();
        if (key >= '0' && key <= '9') {
            key -= '0';
            Vector2 mousePosition = GetMousePosition();
            Node node{key, mousePosition};
            nodes.push_back(node);
            node.toString();
        }
    }
}

// Prints the Node's value and position to the console
void Node::toString() {
    std::cout << "Value : " << value_int << ", Position : (" << position.x << ", " << position.y << ")" << std::endl;
}

// Updates and draws all Nodes in the nodes vector
void Node::update_node() {
    if (IsKeyPressed(KEY_R)) {
        link_vector.clear();
        std::cout << "Cleared the LINK_VECTOR !" << std::endl;
    }
    else if (IsKeyPressed(KEY_A)) {
        std::cout << "Links Erased !" << std::endl;
        links.clear();
    }

    for (Node& node : nodes) {
        node.draw_node();
        node.check_for_link();
    }
    draw_links();
}

// Checks if the Node is clicked by the mouse
bool Node::check_for_link() {
    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) {
        Vector2 mouse_pos = GetMousePosition();
        if (mouse_pos.x <= position.x + radius && mouse_pos.x >= position.x - radius &&
            mouse_pos.y <= position.y + radius && mouse_pos.y >= position.y - radius) {
            std::cout << "Added to the link vector" << std::endl;
            if (link_vector.size() == 2) link_vector.clear();
            link_vector.emplace_back(this);
            if (link_vector.size() == 2) link_nodes();
            return true;
        }
    }
    return false;
}

// Links the two nodes in the link_vector
void Node::link_nodes() {
    if (link_vector.size() == 2) {
        links.emplace_back(link_vector[0], link_vector[1]);
        std::cout << "Linked nodes" << std::endl;
        link_vector.clear();
        printf("current : %d, max : %zu\n",links.size(), links.max_size());
    }
}

// Draws lines between linked nodes
void Node::draw_links() {
    for (const auto& link : links) {
        Vector2 start = link.first->position;
        Vector2 end = link.second->position;
        DrawLineEx(start, end, 2, RED);
    }
}

// Destructor for the Node class
Node::~Node() {
    // std::cout << "The node with the value " << value_int << " has been deleted";
}

// Deletes all the nodes and edges
void Node::delete_all() {
    nodes.clear();
    links.clear();
    link_vector.clear();
}

bool Node::is_clicked() {
    Vector2 mouse_pos = GetMousePosition();
    if (mouse_pos.x <= position.x + radius && mouse_pos.x >= position.x - radius &&
        mouse_pos.y <= position.y + radius && mouse_pos.y >= position.y - radius) {
        std::cout << this->value_int << " is clicked";
        return true;
    }
    return false;
}

void Node::draw() {

}

void Node::update() {
    create_node();
    for(auto &node : nodes){
        node.draw_node();
        node.update_node();
    }
}
