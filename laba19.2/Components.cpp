#include "Components.h"

Components::Components() : metal(false)
{
}

Components::Components(bool metal)
	: metal(metal)
{
}

Components::~Components()
{
}

void Components::display()
{
	std::cout << "Is metal detail? " << metal << std::endl;
}
