#include <iostream>
#include "PhoneBook.hpp"

void ScreenPut()
{
	std::cout << std::endl;
    std::cout << "|-----------WELCOME GALACTİC PHONEBOOK☎📔----------|" << std::endl;
    std::cout << "|                        1-ADD                          |" << std::endl;
    std::cout << "|                        2-SEARCH                       |" << std::endl;
    std::cout << "|                        3-EXIT                         |" << std::endl;
    std::cout << "|-------------------------------------------------------|" << std::endl;
}

int main()
{
	std::string res;
	PhoneBook phonebook;

	ScreenPut();
	while (1)
	{
		std::cout << "|--> ";
		std::getline(std::cin , res);

		if(res == "ADD" || res == "add")
		{
			phonebook.add();
			ScreenPut();

		}
		else if (res == "SEARCH" || res == "search")
			phonebook.search();
		else if(res == "EXIT" || res == "exit")
			break;
	}
	return (0);
}
