#include <iostream>

#include "App.h"
#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "pages/Page.h"

string Page::next = "start";
using std::string;
int main() {
    App app;
    app.launch();

    return 0;
}