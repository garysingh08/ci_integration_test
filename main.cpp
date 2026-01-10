#include <iostream>
#include <cassert>
#include "math_utils.h" // file that holds math functions

int main() {
    std::cout << "Running Automated Tests..." << std::endl;
    
    // Test 1
    assert(addNums(10, 20) == 30);
    
    // Test 2
    assert(addNums(-1, 1) == 0);

    std::cout << "ALL TESTS PASSED!" << std::endl;
    return 0; // Success!
}
