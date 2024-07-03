#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) 
{
    if (this != &other) {
        this->_vector = other._vector;
        this->_deque = other._deque;
    }
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe& other) 
{
    this->_vector = other._vector;
    this->_deque = other._deque;
}

void PmergeMe::printVector() 
{
    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end() && it != _vector.begin() + 30; ++it)
        std::cout << "[" << *it << "]";

    if (_vector.size() > 30) 
        std::cout << " [...]";
    
    std::cout << std::endl;
}

void PmergeMe::printDeque()
{
    for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end() && it != _deque.begin() + 10; ++it)
        std::cout << "[" << *it << "]";
    
    if (_deque.size() > 10) 
        std::cout << " [...]";
    
    std::cout << std::endl;
}

void PmergeMe::isalnum(const std::string& str)
{
    if (str.empty() || str[0] == '-') 
        throw std::invalid_argument("Error: not a positive number.");
    
    if (str.length() > 10 || (str.length() == 10 && str > "2147483647")) 
        throw std::invalid_argument("Error: too large a number.");
    
    for (size_t i = 0; i < str.length(); ++i) 
    {
        if (!isdigit(str[i])) 
            throw std::invalid_argument("Error: not a number.");
    }
}

void PmergeMe::sort(char **arr) 
{
    clock_t start, end;
    double Vtime, Dtime;

    for (size_t i = 1; arr[i] != NULL; ++i) {
        std::string str = arr[i];
        isalnum(str);
        int num = atoi(str.c_str());
        _vector.push_back(num);
        _deque.push_back(num);
    }

    std::cout << "Before: ";
    printVector();
    
    std::cout << std::endl;

    start = clock();
    mergeInsertSort(_vector);
    end = clock();
    Vtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    start = clock();
    mergeInsertSort(_deque);
    end = clock();
    Dtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    std::cout << "After: ";
    printVector();

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector: " << Vtime << " ms\n";
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque: " << Dtime << " ms\n";
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec) 
{
    if (vec.size() <= 10) 
    {
        insertionSort(vec);
        return;
    }
    std::vector<int> left(vec.begin(), vec.begin() + vec.size() / 2);
    std::vector<int> right(vec.begin() + vec.size() / 2, vec.end());
    mergeInsertSort(left);
    mergeInsertSort(right);
    std::merge(left.begin(), left.end(), right.begin(), right.end(), vec.begin());
}

void PmergeMe::mergeInsertSort(std::deque<int>& deq) 
{
    if (deq.size() <= 10) 
    { 
        insertionSort(deq);
        return;
    }
    std::deque<int> left(deq.begin(), deq.begin() + deq.size() / 2);
    std::deque<int> right(deq.begin() + deq.size() / 2, deq.end());
    mergeInsertSort(left);
    mergeInsertSort(right);
    std::merge(left.begin(), left.end(), right.begin(), right.end(), deq.begin());
}

void PmergeMe::insertionSort(std::vector<int>& vec) 
{
    for (size_t i = 1; i < vec.size(); ++i) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

void PmergeMe::insertionSort(std::deque<int>& deq) 
{
    for (size_t i = 1; i < deq.size(); ++i) {
        int key = deq[i];
        int j = i - 1;
        while (j >= 0 && deq[j] > key) {
            deq[j + 1] = deq[j];
            j = j - 1;
        }
        deq[j + 1] = key;
    }
}
