#pragma once

#include <exception>

template <typename T>
class Array {
    private:
        T* data;
        unsigned int n;

    public:
        // Default constructor
        Array() : data(NULL), n(0) {}

        // Constructor with size parameter
        Array(unsigned int size) : n(size)
        {
            data = new T[n];
        }

        // Copy constructor
        Array(const Array& other) : n(other.n) 
        {
            data = new T[n];
            for (unsigned int i = 0; i < n; ++i) 
                data[i] = other.data[i];
        }

        // Assignment operator
        Array& operator=(const Array& other) {
            if (this != &other) 
            {
                delete[] data;
                n = other.n;
                data = new T[n];
                for (unsigned int i = 0; i < n; ++i) {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }

        // Destructor
        ~Array() 
        {
            delete[] data;
        }

        // Subscript operator
        T& operator[](unsigned int index) 
        {
            if (index >= n)
                throw std::out_of_range("Index out of bounds");
    
            return data[index];
        }

        // Const subscript operator
        const T& operator[](unsigned int index) const 
        {
            if (index >= n) 
                throw std::out_of_range("Index out of bounds");
            
            return data[index];
        }

        // Size function
        unsigned int size() const {  return n; }
};

