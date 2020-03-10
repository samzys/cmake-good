add_executable(cmake-good main.cc)
target_link_libraries(cmake-good PRIVATE say-hello)

#target_include_directories(cmake-good PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")