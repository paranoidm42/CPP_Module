#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &a);
		WrongCat &operator=(WrongCat const &a);
		~WrongCat();

		void makeSound() const;
};
