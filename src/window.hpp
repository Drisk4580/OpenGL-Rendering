#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <concepts>

class window {
private:
    auto windowInstance();
    GLFWwindow* gameWindow;
    void createContext();
public:
    void createWindow();
    window() {};
};
