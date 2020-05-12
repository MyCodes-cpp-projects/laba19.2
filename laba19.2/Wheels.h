#pragma once
#include "Components.h"
class Wheels : virtual public Components
{
	int wheelscount;
public:
	Wheels();
	Wheels(bool metal,int MUSTANGS);
	virtual ~Wheels();

	virtual void display();
};

