#pragma once

#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &a);
		WrongAnimal &operator=(WrongAnimal const &a);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};