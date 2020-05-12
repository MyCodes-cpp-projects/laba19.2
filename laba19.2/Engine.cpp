#include "Engine.h"

Engine::Engine() : Components(), horsePowers(0)
{
}

Engine::Engine(bool metal, int po)
	:Components(metal),horsePowers(po)
{
}

Engine::~Engine()
{
}

void Engine::display()
{
	std::cout << "Under car bonnet we have: " << horsePowers << " horsePowers" << std::endl;
}
