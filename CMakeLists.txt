cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILER /bin/clang)

project(OpenGL-Rendering C)

add_subdirectory(external/GLFW)
add_subdirectory(external/glad)

IF(WIN32)
  message(FATAL_ERROR "Windows not supported.")
ENDIF()

add_subdirectory(src)

