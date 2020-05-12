#pragma once
#include "Doors.h"
#include "Wheels.h"
#include "Engine.h"
class Ferrari : public Doors, public Wheels, public Engine
{
	std::string owner;
public:
	Ferrari();
	Ferrari(bool metal,int doors,int wheels,int horses,std::string owner);
	virtual ~Ferrari();

	void display() override;
};

