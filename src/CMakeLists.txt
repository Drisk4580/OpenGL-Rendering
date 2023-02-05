file(GLOB_RECURSE SRC ./*.c)

add_executable(main ${SRC})

target_link_libraries(main PUBLIC glad glfw)
