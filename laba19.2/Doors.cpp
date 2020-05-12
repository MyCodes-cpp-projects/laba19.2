#include "Doors.h"

Doors::Doors() : Components(),doors(0)
{
}

Doors::Doors(bool metal, int doors)
	: Components(metal), doors(doors)
{
}

Doors::~Doors()
{
}

void Doors::display()
{
	std::cout << "Opened " << doors << " doors" << std::endl;
}
