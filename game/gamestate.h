#pragma once

#include <string>
using namespace std;

enum GamestateType {MENU, MAIN_GAME};

class Gamestate
{
	public:
	GamestateType type();
};

class Menu : public Gamestate
{
	const int NUM_OPTIONS = 3;
	string options[NUM_OPTIONS] = {"Play", "About", "Quit"};
	
	public:
	GamestateType type();
};

GamestateType Menu::type()
{
	return MENU;
}

class Main_Game : public Gamestate
{
	
	public:
	GamestateType type();
};

GamestateType Main_Game::type()
{
	return MAIN_GAME;
}