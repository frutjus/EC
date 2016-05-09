#pragma once

class Game
{
	bool isrunning;
	
	public:
	Game();
	bool running();
};

Game::Game()
{
	isrunning = true;
}

bool Game::running()
{
	return isrunning;
}