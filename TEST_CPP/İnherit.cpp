#include <iostream>

using namespace std;


class Animal
{
    private:
        string _Name;
    public:
        void print()
        {
             cout << "Hello animal" << endl;
        }
};




class Mammal 
{
private:
    int _Age;
public:
    void nothing()
    {
        cout << "therei is nothing" << endl;
    }
    void print()
    {
        cout << "Hello Mammal" << endl;
    }
};

class Bat : public Mammal , public Animal
{
private:
    
public:
 
};



int main()
{
    Bat bat;
    bat.nothing();
    bat.Mammal::print();
}
