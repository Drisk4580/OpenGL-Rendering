file(GLOB_RECURSE SRC ./*.cpp)

add_executable(main ${SRC})

target_link_libraries(main PUBLIC glad glfw glm)
