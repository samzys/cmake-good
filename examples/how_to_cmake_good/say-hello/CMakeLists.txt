add_library(
        say-hello
        src/say-hello/hello.h
        src/say-hello/hello.cc
)

target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# PREPRECESSOR DEFINITION
target_compile_definitions(say-hello PUBLIC SAY_HELLO_VERSION=8)
