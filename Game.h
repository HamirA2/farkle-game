#pragma once

#include <vector>
#include "Player.h"

class Game
{
	// Player vector attribute
	private:
		std::vector<Player> playerInfo;

	// Public constructors
	public:
		bool FarkleGame();
		int FarkleGame(int& leaderTurn, std::vector<Player> numPlayers);
		bool HasPointDice(std::vector<int> diceVal);
		int NextPlayer(int& nextTurn, int& totalPlayers);
		std::vector<int> RollDice(int quantity);
		bool HasThree(int& value, std::vector<int> checkVals);
		bool ValidInput(int& decision, std::vector<int> validRolls);
		std::vector<int> RemoveDice(int& selected, int times, std::vector<int> allDice);
		int WinningConditions(int score);
		void ReadRules();
		void MenuChoice();
};

