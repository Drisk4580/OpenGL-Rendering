#include "window.hpp"
#include <exception>
#include <stdexcept>

// typename<typename T>
// concept glCanvasSize

void window::createContext() {
    // Initialize GLFW 
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // TODO: Add MacOS support

    // Actual Window Creation
    this->gameWindow = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (this->gameWindow == NULL) {
        glfwTerminate();
        throw new std::runtime_error("Failed to Create Window");
    }
    // Create The window context
    glfwMakeContextCurrent(this->gameWindow);
}

auto window::windowInstance() {
    createContext();
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        throw new std::runtime_error("Failed to initialize GLAD");
    }

    // Create OpenGL Viewport
    // glfwSetFramebufferSizeCallback(this->gameWindow,);
}

void window::createWindow() {
    
}
