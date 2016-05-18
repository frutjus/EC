#pragma once

#include "gamestate.h"

class Game
{
	bool isrunning;
	Gamestate *gamestate;
	
	public:
	Game();
	~Game();
	bool running();
	GamestateType getState();
	void changeState(GamestateType);
};

Game::Game()
{
	isrunning = true;
	
	gamestate = new Menu;
}

Game::~Game()
{
	delete gamestate;
}

bool Game::running()
{
	return isrunning;
}

void Game::play()
{
	gamestate->play();
}

GamestateType Game::getState()
{
	return gamestate->type();
}

void Game::changeState(GamestateType type)
{
	delete gamestate;
	
	switch (type)
	{
		case MENU: gamestate = new Menu;
		break;
		case MAIN_GAME: gamestate = new Main_Game;
		break;
	}
}