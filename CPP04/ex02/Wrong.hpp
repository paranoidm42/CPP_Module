#pragma once

#include <string>

class WrongAnimal{
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

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat const &a);
		WrongCat &operator=(WrongCat const &a);
		~WrongCat();

		void makeSound() const;
};
