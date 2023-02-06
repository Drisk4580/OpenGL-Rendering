cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_COMPILER /bin/clang++)

project(OpenGL-Rendering CXX)

add_subdirectory(external/GLFW)
add_subdirectory(external/glad)
add_subdirectory(external/glm)

add_subdirectory(src)

