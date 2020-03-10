//
// Created by sam on 10/3/2020.
//
#include <iostream>

#include <say-hello/hello.h>

int main()
{
    hello::say_hello();
    std::cout << "the say-hello library is version "<< SAY_HELLO_VERSION<< "\n";
    return 0;
}