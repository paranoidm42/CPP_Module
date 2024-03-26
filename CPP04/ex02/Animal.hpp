#pragma once

#include <iostream>

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal() = 0;

		void setType(std::string name_type);
		const std::string& getType() const;

		virtual void makeSound() const = 0;
};
