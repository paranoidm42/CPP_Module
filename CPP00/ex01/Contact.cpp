#include "Contact.hpp"


Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::setName(std::string name)
{
		this->Name = name;
}
void Contact::setSurname(std::string surname)
{
	this->Surname = surname;
}
void Contact::setNickname(std::string nickname)
{
	this->Nickname = nickname;
}
void Contact::setPhonenumber(long phonenumber)
{
	this->PhoneNumber = phonenumber;
}
void Contact::setDarkSecret(std::string darksecret)
{
	this->DarkSecret = darksecret;
}
std::string Contact::getName()
{
	return this->Name;
}
std::string Contact::getSurname()
{
	return this->Surname;
}

std::string Contact::getNickname()
{
	return this->Nickname;
}

long Contact::getPhonenumber()
{
	return this->PhoneNumber;
}

std::string Contact::getDarkSecret()
{
	return this->DarkSecret;
}
