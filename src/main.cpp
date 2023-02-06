#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "window.hpp"

window* gameWindow = new window();

int main() {
    gameWindow->createWindow();

    return 0;
}
