#include "Test.hpp"

// ***********************
// ****** ORTODOKS *******
// ***********************


Test::Test()
{
    std::cout << "Object Created.." << std::endl;
}

Test::Test(int age, std::string name)
{
    std::cout << "Object Created with Parameter Constructor.." << std::endl;

    this->setName(name);
    this->setAge(age);
}

Test::~Test()
{    
    std::cout << "Object Destroyed!!" << std::endl;
}

Test::Test(const Test& other)
{
    std::cout << "Object Created with Copy Constructor.." << std::endl;

    this->setAge(other.getAge());
    this->setName(other.getName());
}



Test& Test::operator=(const Test& other)
{
    if(this != &other)
    {
        std::cout << "Object Assigment with Assigmant Operator Overloading.." << std::endl;
        this->setAge(other.getAge() + 5);
        this->setName(other.getName() + ".test");
    }
    return *this;
}


Test& Test::operator+(const Test& other) const
{
    Test *newObject  = new Test();

    newObject->setName( this->getName() + other.getName() );
    newObject->setAge( this->getAge() + other.getAge() );

    return *newObject;
}


// ***********************
// ****** GET/SET* *******
// ***********************

const int& Test::getAge() const { return this->age; }
const std::string& Test::getName() const {return this->name; }

void Test::setAge(int age) { this->age = age; }
void Test::setName(std::string name) {this->name = name; }


// ***********************
// ******   OTHER  *******
// ***********************

void Test::writeInfo()
{
    if(!this->getName().empty() && this->getAge() != 0)
        std::cout << "Name: " << this->getName() << " and Age: " << this->getAge() << std::endl;
    else 
        std::cout << "This object is empty!" << std::endl;
}