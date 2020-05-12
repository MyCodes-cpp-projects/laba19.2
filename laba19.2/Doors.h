#pragma once
#include "Components.h"
class Doors : virtual public Components
{
	int doors;
public:
	Doors();
	Doors(bool metal,int doors);
	virtual ~Doors();

	virtual void display();
};

