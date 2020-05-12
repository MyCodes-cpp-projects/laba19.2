#pragma once

#include <iostream>
#include <iomanip>
class Components
{
	bool metal;
public:
	Components();
	Components(bool metal);
	virtual ~Components();

	virtual void display();
};

