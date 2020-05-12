#pragma once
#include "Components.h"
class Engine : virtual public Components
{
	int horsePowers;
public:
	Engine();
	Engine(bool metal,int po);
	virtual ~Engine();
	virtual void display();
};

