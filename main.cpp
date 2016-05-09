#include "game\game.h"
#include "interface\interface.h"

int main()
{
	Game game;
	Interface interface(game);
	
	while (game.running())
	{
		game.play();
		interface.display();
		interface.getInput();
	}
}