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

		
};
