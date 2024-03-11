#ifndef PHONEBOOK
#define PHONEBOOK

#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int index;
		int size;
	public:
		PhoneBook();
		~PhoneBook();
		int add();
		int search();
		void PutStrWithDot(std::string text);
		std::string get_return(std::string text);
		void WritePerson(Contact contact);
};

#endif
