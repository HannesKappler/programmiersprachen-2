# Build example
add_executable(example
  window.cpp
  glew.c
  vec2.cpp
  example.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

# Build tests
add_executable(tests
  vec2.cpp
  tests.cpp)
target_link_libraries(tests
  ${GLFW_LIBRARIES})


