#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Wrong.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* c = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	c->makeSound();

	delete meta;
	delete j;
	delete i;
	delete c;
	
	return 0;
}
