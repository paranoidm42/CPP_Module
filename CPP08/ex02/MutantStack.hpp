#pragma once

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;

        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack<T>& src) : std::stack<T>(src) {}
        ~MutantStack() {}

        MutantStack<T>& operator=(const MutantStack<T>& rhs) 
        {
            if (this != &rhs) {
                std::stack<T>::operator=(rhs);
            }
            return *this;
        }

        iterator begin() 
        {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }
};
