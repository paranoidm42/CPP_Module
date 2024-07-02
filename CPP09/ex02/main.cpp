#include <iostream>
#include <cstdlib>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    try {
        PmergeMe pmergeme;
        pmergeme.sort(argv);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}
