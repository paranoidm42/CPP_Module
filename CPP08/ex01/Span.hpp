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

        std::vector<int>& getVector();

        std::vector<int> sortVec(std::vector<int> vec);

};


std::vector<int>& Span::getVector() { return _numbers; }

Span::Span(unsigned int N) : _n(N)
{
    
}

Span::~Span()
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other){
		this->_n = other._n;
		this->_numbers = other._numbers;
	}
	return *this;
}


Span::Span(const Span& other):_n(other._n)
{	
	_numbers = other._numbers;
}




void Span::addNumber(int number)
{

    if (_numbers.size() == _n)
    {
		throw std::exception();
	}

	_numbers.push_back(number);
}


void Span::addNumber(int n, time_t seed)
{
    std::srand(static_cast<unsigned int>(seed));

    for (int i = 0; i < n; ++i) {
        int random_number = std::rand() % 100000 + 1;
        addNumber(random_number);
    }
}

std::vector<int> Span::sortVec(std::vector<int> vec)
{
    std::vector<int> sorted_vec = vec;

    std::sort(sorted_vec.begin(), sorted_vec.end());

    return sorted_vec;
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2) 
        throw std::exception();
    

    std::vector<int> sorted_vec = sortVec(_numbers);
	int min = sorted_vec[sorted_vec.size() - 1] - sorted_vec[0];

  	for (std::size_t i = 1; i < sorted_vec.size(); i++)
    {
		if (sorted_vec[i] - sorted_vec[i - 1] < min)
			min = sorted_vec[i] - sorted_vec[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
    if (_numbers.size() < 2) {
        throw std::exception();
    }

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return max - min;
}
