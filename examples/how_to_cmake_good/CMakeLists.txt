cmake_minimum_required(VERSION 3.10...3.16)
project(TopProject VERSION 2.4.1)

include(PrintVariables.cmake)

print_variables()

add_subdirectory(say-hello)
add_subdirectory(hello-exe)
