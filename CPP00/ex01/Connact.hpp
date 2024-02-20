#ifndef CONNACT
# define CONNACT

#include <iostream>

class Connact
{
	private:
		std::string Name;
		std::string Surname;
		std::string Nickname;
		int PhoneNumber;
		std::string DarkSecret;
	public:
		Connact();
		~Connact();
		void setName(std::string name);
		void setSurname(std::string surname);
		void setNickname(std::string nickname);
		void setPhonenumber(int phonenumber);
		void setDarkSecret(std::string darksecret);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		int getPhonenumber();
		std::string	getDarkSecret();
};


#endif
