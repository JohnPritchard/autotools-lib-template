#include "hello.hpp"

#include <string>

std::string hello_package_string()
{
    return std::string(PACKAGE_STRING);
}

