#ifndef PMERGEME_H
#define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <algorithm>

class PmergeMe 
{
    private:
        std::vector<int> _vector;
        std::deque<int> _deque;

        void mergeInsertSort(std::vector<int>& vec);
        void mergeInsertSort(std::deque<int>& deq);
        void isalnum(const std::string& str);

    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe & origin);
        PmergeMe& operator=(const PmergeMe & origin);
        ~PmergeMe(void);

        
        void sort(char **arr);
        void printVector();
        void printDeque();
};

#endif
