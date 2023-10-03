#pragma once

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testBigIntegers();
        testSpecialIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(-1, 5) != 4) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testBigIntegers() {
        Addition addition;
        if (addition.add(13275983, 1000000) != 14275983) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testSpecialIntegers() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    // Add other test functions here
};