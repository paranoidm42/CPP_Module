#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <stdexcept>
#include <cstdlib>
#include <cstddef>

class PmergeMe 
{
    private:
        std::vector<int> _vector;
        std::deque<int> _deque;

        void mergeInsertSort(std::vector<int>& vec);
        void mergeInsertSort(std::deque<int>& deq);
        void insertionSort(std::vector<int>& vec);
        void insertionSort(std::deque<int>& deq);
        void isalnum(const std::string& str);

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& other);
        PmergeMe(const PmergeMe& other);

        void sort(char **arr);
        void printVector();
        void printDeque();
};

#endif
