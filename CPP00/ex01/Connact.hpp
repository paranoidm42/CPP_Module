#ifndef CONNACT
# define CONNACT

#include <iostream>

class Connact
{
	private:
		std::string Name;
		std::string Surname;
		std::string Nickname;
		long PhoneNumber;
		std::string DarkSecret;
	public:
		Connact();
		~Connact();
		void setName(std::string name);
		void setSurname(std::string surname);
		void setNickname(std::string nickname);
		void setPhonenumber(long phonenumber);
		void setDarkSecret(std::string darksecret);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		long getPhonenumber();
		std::string	getDarkSecret();
};


#endif
