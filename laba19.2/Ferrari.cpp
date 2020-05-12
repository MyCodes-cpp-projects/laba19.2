#include "Ferrari.h"

Ferrari::Ferrari() : Wheels(),Doors(),Engine(),owner("-")
{
}

Ferrari::Ferrari(bool metal, int doors, int wheels, int horses, std::string owner)
	: Engine(metal, horses), Doors(metal, doors), Wheels(metal, wheels), owner(owner)
{
}

Ferrari::~Ferrari()
{
}

void Ferrari::display()
{
	Components::displayall();
	Engine::display();
	Doors::display();
	Wheels::display();
	std::cout << "Owner of that brand new ferrari is: " << owner << std::endl;
}
