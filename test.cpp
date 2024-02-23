#include <iostream>

using namespace std;

class Test
{
    private:
      string name;
      int age;
    public:
      Test();
      Test(const Test& obj);
      Test& operator=(const Test& obj);
      string getName();
      int getAge();
};

string Test::getName() { return this->name; }
int Test::getAge() { return this->age; }

Test& Test::operator=(const Test& obj)
{
    this->name = obj.name;
    this->age = obj.age;
    cout << "Abs  createdt" << endl;
    return *this;
}

Test::Test()
{
    this->name = "NULL";
    this->age = 0;
    cout << "Main const created!!" << endl;
}

Test::Test(const Test& obj)
{
    this->name = obj.name;
    this->age = obj.age + 5;
    cout << "Copy const created!!" << endl;
}


int main()
{

    Test test1;
    Test test2 = test1;
    Test test3;
    test3 = test2;
    cout << test2.getAge() << endl;
    cout << test3.getAge() << endl;

    cout << test1.getAge() << endl;
}
