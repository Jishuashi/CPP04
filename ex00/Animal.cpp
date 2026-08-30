#include "includes/Animal.hpp"

Animal::Animal() 
{ 
	print_msg("An Animal was created");
}

Animal::~Animal() { }

Animal::Animal(const Animal &pToCopy)
{
	type = pToCopy.type;
}

Animal &Animal::operator=(const Animal &pOther)
{
	if (this != &pOther)
	{
		this->type = pOther.type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	print_msg("This animal doesn't make a sound");
}
