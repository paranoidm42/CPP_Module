#include "Connact.hpp"


Connact::Connact()
{

}

Connact::~Connact()
{
	
}

void Connact::setName(std::string name)
{
		this->Name = name;
}
void Connact::setSurname(std::string surname)
{
	this->Surname = surname;
}
void Connact::setNickname(std::string nickname)
{
	this->Nickname = nickname;
}
void Connact::setPhonenumber(std::string phonenumber)
{
	this->PhoneNumber = phonenumber;
}
void Connact::setDarkSecret(std::string darksecret)
{
	this->DarkSecret = darksecret;
}
std::string Connact::getName()
{
	return this->Name;
}
std::string Connact::getSurname()
{
	return this->Surname;
}

std::string Connact::getNickname()
{
	return this->Nickname;
}

std::string Connact::getPhonenumber()
{
	return this->PhoneNumber;
}

std::string Connact::getDarkSecret()
{
	return this->DarkSecret;
}
