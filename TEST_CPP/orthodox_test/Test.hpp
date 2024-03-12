#ifndef TEST
#define TEST

#include <iostream>

class Test
{
    private:
        std::string name;
        int age;
    public:
        Test();
        Test(int age, std::string name);
        Test(const Test& other);
        Test& operator=(const Test& other);

        Test& operator+(const Test& other) const;

        ~Test();

        const int& getAge() const;
        const std::string& getName() const;

        void setAge(int age);
        void setName(std::string name); 

        void writeInfo();
};



#endif