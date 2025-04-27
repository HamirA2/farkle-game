/*Hamir Aquino
  Used for the running the options of the Game file
 */
#include "Game.h"
#include "Player.h"
#include <iostream>

using namespace std;

// Runs all classes to start the Farkle game
int main() {
	Game playGame;

	playGame.MenuChoice();

	cout << "Thanks for playing!" << endl;

	return 1;
}