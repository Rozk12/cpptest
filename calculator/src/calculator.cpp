#include "custom_math.hpp"
#include <iostream>

int main() {
    double a = 5.0;
    double b = 10.5;
    auto result = test_library::sum(a, b);
    std::cout << a << " + " << b << " = " << result << std::endl;
    return 0;
}