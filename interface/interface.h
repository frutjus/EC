#pragma once

#include "../game/game.h"

#include <SDL2/SDL.h>

class Interface
{
	Game game;
	
	public:
	Interface(Game &);
	~Interface();
	void display();
	void getInput();
};

Interface::Interface(Game &g)
{
	game = g;
}

Interface::~Interface()
{
	
}

void Interface::display()
{
	
}

void Interface::getInput()
{
	
}