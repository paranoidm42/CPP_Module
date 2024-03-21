#pragma once

#include <iostream>

class Animal
{
	private:
		/* data */
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();

		void setType(std::string name_type);
		const std::string& getType() const;

		virtual void makeSound() const;
};
