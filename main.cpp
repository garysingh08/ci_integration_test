#include <iostream>
#include <cassert>
#include "math_utils.h" // file that holds math functions

int main() {
    std::cout << "Running Automated Tests..." << std::endl;
    
    test_positive_numbers();
    test_negative_numbers();
    test_zero();
    
    std::cout << "ALL TESTS PASSED!" << std::endl;
    return 0; // Success!
}
