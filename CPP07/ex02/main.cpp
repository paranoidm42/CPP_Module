// main.cpp
#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Test default constructor
        Array<int> a1;
        std::cout << "a1 size: " << a1.size() << std::endl;

        // Test constructor with size parameter
        Array<int> a2(5);
        std::cout << "a2 size: " << a2.size() << std::endl;
        for (unsigned int i = 0; i < a2.size(); ++i) {
            a2[i] = i * 2;
        }
        for (unsigned int i = 0; i < a2.size(); ++i) {
            std::cout << "a2[" << i << "]: " << a2[i] << std::endl;
        }

        // Test copy constructor
        Array<int> a3 = a2;
        std::cout << "a3 size: " << a3.size() << std::endl;
        for (unsigned int i = 0; i < a3.size(); ++i) {
            std::cout << "a3[" << i << "]: " << a3[i] << std::endl;
        }

        // Modify a2 and ensure a3 is not affected
        a2[0] = 100;
        std::cout << "After modifying a2:" << std::endl;
        std::cout << "a2[0]: " << a2[0] << std::endl;
        std::cout << "a3[0]: " << a3[0] << std::endl;

        // Test assignment operator
        Array<int> a4;
        a4 = a2;
        std::cout << "a4 size: " << a4.size() << std::endl;
        for (unsigned int i = 0; i < a4.size(); ++i) {
            std::cout << "a4[" << i << "]: " << a4[i] << std::endl;
        }

        // Modify a2 and ensure a4 is not affected
        a2[1] = 200;
        std::cout << "After modifying a2 again:" << std::endl;
        std::cout << "a2[1]: " << a2[1] << std::endl;
        std::cout << "a4[1]: " << a4[1] << std::endl;

        // Test out of bounds exception
        try {
            std::cout << "a2[10]: " << a2[10] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
