cmake_minimum_required(VERSION 3.10)
project(test_imgui)

find_package(SFML REQUIRED COMPONENTS system window graphics network audio)

# include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
# conan_basic_setup()

add_executable(main
  main.cpp
  imgui/imgui.cpp
  imgui/imgui_draw.cpp
  imgui-sfml/imgui-SFML.h
  imgui-sfml/imgui-SFML.cpp
  # imgui_impl_sdl_gl2.h
  # imgui_impl_sdl_gl2.cpp
  # imgui/imgui_demo.cpp  # Only needed for ImGui::ShowTestWindow
  )

target_include_directories(main PUBLIC imgui)
target_include_directories(main PUBLIC imgui-sfml)
# target_link_libraries(main ${CONAN_LIBS})
# target_link_libraries(main "-lSDL2")
target_link_libraries(main sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
target_link_libraries(main "-lGL")  # Link with opengl library
