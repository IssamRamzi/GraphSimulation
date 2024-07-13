cmake_minimum_required(VERSION 3.26)
project(GraphSimulation)

set(CMAKE_CXX_STANDARD 17)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 4.2.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
    include(FetchContent)
    FetchContent_Declare(
            raylib
            URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    )
    FetchContent_GetProperties(raylib)
    if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(raylib)
        set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
        add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
    endif()
endif()

# Our Project

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/headers/Graph.cpp
        src/headers/Graph.h
        src/headers/Node.cpp
        src/headers/Node.h
        src/headers/Utils.cpp
        src/headers/Utils.h
        src/pages/home.cpp
        src/pages/page.cpp
        src/Constants.cpp
        src/pages/home.h
        src/pages/page.h
        src/pages/start.cpp
        src/pages/start.h
        src/Components/Button.cpp
        src/Components/Button.h
        src/Constants.h
        src/Components/Component.h
        src/Components/TaskBar.cpp
        src/Components/TaskBar.h
        src/App.cpp
        src/Components/IconButton.cpp
)
#set(raylib_VERBOSE 1)
target_link_libraries(${PROJECT_NAME} raylib)

# Web Configurations
if (${PLATFORM} STREQUAL "Web")
    # Tell Emscripten to build an example.html file.
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
endif()

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
