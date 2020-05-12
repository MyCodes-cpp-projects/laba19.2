#include "Wheels.h"

Wheels::Wheels() : Components(),wheelscount(0)
{
}

Wheels::Wheels(bool metal, int MUSTANGS) : Components(metal), wheelscount(MUSTANGS)
{
}

Wheels::~Wheels()
{
}

void Wheels::display()
{
	std::cout << "Car have: " << wheelscount << " wheels" << std::endl;
}
