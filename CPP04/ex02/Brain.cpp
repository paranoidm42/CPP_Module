#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain const init." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain destructor init." << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy const init." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment const init." << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea(int i) const
{
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}