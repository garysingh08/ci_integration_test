#include <iostream>
#include <cassert>

// The function we are testing
int addNums(int x, int y) {
    return x + y;
}

void test_positive_numbers() {
    assert(addNums(5, 5) == 11);
    std::cout << "✅ Test Passed: 5 + 5 = 10" << std::endl;
}

void test_negative_numbers() {
    assert(addNums(-1, -1) == -2);
    std::cout << "✅ Test Passed: -1 + -1 = -2" << std::endl;
}

void test_zero() {
    assert(addNums(0, 100) == 100);
    std::cout << "✅ Test Passed: 0 + 100 = 100" << std::endl;
}

int main() {
    std::cout << "Running Automated Tests..." << std::endl;
    
    test_positive_numbers();
    test_negative_numbers();
    test_zero();
    
    std::cout << "ALL TESTS PASSED!" << std::endl;
    return 0; // Success!
}
