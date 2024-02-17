#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook()
{

}


std::string PhoneBook::get_return(std::string text)
{
	std::string res;
	std::cout << text;
	std::getline(std::cin, res);
	if (res.empty())
		return "";
	return res;
}

void PhoneBook::PutStrWithDot(std::string text)
{
	if(text.length() > 10)
		std::cout << "|" << std::setw(10) << text.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << text.substr(0,10);
}

int PhoneBook::add()
{
	std::string input[5];
	input[0] = get_return("Name: ");
	input[1] = get_return("Surname: ");
	input[2] = get_return("Nickname: ");
	input[3] = get_return("DarkSecret: ");
	input[4] = get_return("PhoneNumber: ");

	for (int i = 0; i < 5; i++)
	{
		if (input[i].empty())
			return -1;
	}
	this->contact[this->index].setName(input[0]);
	this->contact[this->index].setSurname(input[1]);
	this->contact[this->index].setNickname(input[2]);
	this->contact[this->index].setPhonenumber(input[4]);
	this->contact[this->index].setDarkSecret(input[3]);
	this->index = (this->index + 1) % 8;
	if (this->size < 9)
		size++;

	return 0;
}

int PhoneBook::search()
{

	int s_index;
    std::cout   << "|--------------Contact Display--------------|\n"
                << "|-------------------------------------------|\n"
	            << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|-------------------------------------------|\n";
    for (int i = 0; i <= this->size ; i++)
    {
		std::cout << "|" << std::setw(10) << i;
		PutStrWithDot(this->contact[i].getName());
		PutStrWithDot(this->contact[i].getSurname());
		PutStrWithDot(this->contact[i].getNickname());
        std::cout << '|' << std::endl;
    }
	std::cout << "Make your chosse :> ";
	std::cin >> s_index;
	std::cout << std::endl;
	if (s_index > this->size || !this->size )
	{
		std::cout << "There is no an Alien!!!";
		return 0;
	}

	std::cout   << "|--------------All Info Display---------------------------|\n"
	       		<< "|    First Name| Last Name|  Nickname| DarkSecret| Number |\n"
	       		<< "|---------------------------------------------------------|\n"
				<< std::endl;
	PutStrWithDot(this->contact[s_index].getName());
	PutStrWithDot(this->contact[s_index].getSurname());
	PutStrWithDot(this->contact[s_index].getNickname());
	PutStrWithDot(this->contact[s_index].getDarkSecret());
	PutStrWithDot(this->contact[s_index].getPhonenumber());
	std::cout << std::endl;

	return 0;
}

