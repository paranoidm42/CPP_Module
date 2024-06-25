#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <limits>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
        std::vector<int> _numbers;
	    unsigned int _n;

    public:
        Span(unsigned int N);
        ~Span();
        Span& operator=(const Span& other);
        Span(const Span& other);
        void addNumber(int number);
        void addNumber(int n, time_t seed);
        int shortestSpan();
        int longestSpan();

        void getVectorMember();

        std::vector<int> sortVec(std::vector<int> vec);

};

