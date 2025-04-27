#pragma once

#include <string>

// Player class with attributes and methods
class Player {
	private:
		std::string playerName;
		int playerScore;

	public:
		Player() {
			playerScore = 0;
		}
		// Method to set the name of a player
		void SetName(std::string& name) {
			playerName = name;
		}
		// Method to get the name of a player
		const std::string GetName() const {
			return playerName;
		}
		// Method to set the score of a player
		void SetScore(int& score) {
			playerScore += score;
		}
		// Method to get the score of a player
		const int GetScore() const {
			return playerScore;
		}
};
