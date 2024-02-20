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
	do
	{
		std::cout << text;
		std::getline(std::cin , res);
		if(res.empty())
			std::cout << "It can not empty. Try again!!" << std::endl;
	} while (res.empty());
	return res;
}

void PhoneBook::PutStrWithDot(std::string text)
{
	if(text.length() > 10)
		std::cout << "|" << std::setw(10) << text.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << text.substr(0,10);
}

void PhoneBook::WritePerson(Connact contact)
{
	std::cout   << "|--------------All Info Display---------------------------|\n"
	       		<< "|    First Name| Last Name|  Nickname| DarkSecret| Number |\n"
	       		<< "|---------------------------------------------------------|\n"
				<< std::endl;
	PutStrWithDot(contact.getName());
	PutStrWithDot(contact.getSurname());
	PutStrWithDot(contact.getNickname());
	PutStrWithDot(contact.getDarkSecret());
	std::ostringstream oss;
	oss << contact.getPhonenumber();
	PutStrWithDot(oss.str());
	std::cout << std::endl;
}

int PhoneBook::add()
{
	std::string input[5];
	int num;
	input[0] = get_return("Name: ");
	input[1] = get_return("Surname: ");
	input[2] = get_return("Nickname: ");
	input[3] = get_return("DarkSecret: ");

	do
	{
		input[4] = get_return("PhoneNumber: ");
		std::istringstream iss(input[4]);
		iss >> num;
		if(iss.fail())
			std::cout << "Invalid input. Please enter a valid number." << std::endl;
		else
			break;
	} while (true);

	this->contact[this->index].setName(input[0]);
	this->contact[this->index].setSurname(input[1]);
	this->contact[this->index].setNickname(input[2]);
	this->contact[this->index].setDarkSecret(input[3]);
	this->contact[this->index].setPhonenumber(num);
	this->index = (this->index + 1) % 8;
	if (this->size < 8)
		size++;
	return 0;
}

int PhoneBook::search()
{
	std::string s_index;
	int i_index;

	if(!this->size)
	{
		std::cout << "There is no one here, you need to add someone!! " << std::endl;
		return (0);
	}
    std::cout << "/------------------------------------------\\" << std::endl;
    std::cout << "|              CONTACT LIST                |" << std::endl;
    std::cout << "|  index  |first name| last name| nickname |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < this->size ; i++)
    {
		std::cout << "|" << std::setw(10) << i;
		PutStrWithDot(this->contact[i].getName());
		PutStrWithDot(this->contact[i].getSurname());
		PutStrWithDot(this->contact[i].getNickname());
        std::cout << '|' << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
    }

	do
	{
		std::cout << "İndex |-> ";
		std::getline(std::cin, s_index);
		std::istringstream iss(s_index);
		iss >> i_index;
		std::cout << std::endl;
		if(s_index.empty())
			std::cout <<  "It can not null. Try again!! " << std::endl;
		else if (i_index >= this->size || iss.fail())
			std::cout << "there is no this index or it is not number" << std::endl;
		else
		{
			std::cout << std::endl;
			WritePerson(this->contact[i_index]);
			break;
		}
	} while (s_index.empty());
	return 0;
}

