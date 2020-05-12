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

void Components::displayall()
{
	std::cout << "Is metal detail? " << metal << std::endl;
}
