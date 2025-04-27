/*Hamir Aquino, IT-312, 12/18/2024, 7-1 Final Project Submission: Dice Game
  For the final project, I created two different classes, the Game and Player classes, to use their attributes and methods to create a
  dice game that resembles the Farkle game. The Player class contains attributes to store two types of information, the name of the player
  and the score of the player. To modify and view those values, setter and getter methods were used so that the Game class could use those
  values to return the private attributes of the player class. The Game class was used to set up various methods that would help the game
  run accordingly. With a vector attribute of type Player, the Game class was able to store various numbers of players while being able to
  access the Player attribute to properly demonstrate whos turn it is and how many points the player had. The Game class contained two
  methods called FarkleGame that were either a bool or int return type. The main game was the bool FarkleGame method that brought together 
  the other methods of the Game class to form the Farkle game, returning true as soon as a winner was declared, while the int FarkleGame 
  was used to set up a final round where players had one turn to try and beat the player who was in the lead, having a score over 10,000 
  points. The HasPointDice method was used to check if a player had any point dice, such as a 1, 5, or three of a kind, which returned 
  true if a player had point dice, allowing the player to store their dice rolls, or it returned false, prompting a Farkle message since
  the player did not have and point dice. The NextPlayer method was used to determine the turn of the next player moving to the left by
  subtracting the current player's turn as long as it was not a 0 index number. If the turn was at index 0, meaning the first player who
  entered is ending their turn, then the returned value of the NexPlayer method gets the size of the total players participating minus 1
  to use it as a valid index that would move over to the last player's turn. Next is the RollDice method that is used to randomly roll all
  six dice, returning those values in a vector that is demonstrated to the player. The HasThree method is used to check if the dice set
  aside by a player is a point dice that has three of a kind, and if so, this allows the value of that roll times 100 to be set aside as
  points while recording the dice set aside to properly score those points, especially if three 1s are stored which results in a great
  value of 1,000 points. The ValidInput method is used to determine if the value selected by a user is within their dice rolls, and if so,
  that value is checked to see if it is determined a point roll or not, but if the value is not valid, the player is informed and they must
  select another value that they have rolled. The RemoveDice method was used to remove dice rolls a player has selected to prevent extra
  points from being added. This method prevents three of a kind values from being selected again by removing the three of a kind setting
  their value to 0. If three 1s were rolled, all three of those 1s are set to 0 to prevent the remaining 1s from being used to earn more
  points. In the WinningConditions method, the points of a player is checked to verify whether they have won, have surpassed the winning
  score, or to continue the game using returned numbers to represent different conditions. The ReadRules method is used to read a text file
  containing the rules of the Farkle game and demonstrating the rules to the players in the terminal. Finally, the MenuChoice method is used
  to determine what action to perform, where a choice of 1 allows players to start the Farkle game, a choice of 2 allows players to view the
  rules of the Farkle game, and any other choice quits the program. To start, a Game object is created to call on the MenuChoice method,
  prompting input from the user to perform different actions. When a game is started, players are asked for how many will be playing the
  game, which must be more than 1. After getting 2 or more players, the game populates the player vector by the number of players that will
  be participating. It then loops through the size of the vector to allow each player to set a name for themselves. Turns are then 
  randomized and the main loop of the game starts by showing the turn of the player that is rolling, and rolling all six dice using the
  RollDice method with dice that have not been set aside. Each dice roll is demonstrated to the player, the dice roll are then checked to
  see if the player has any point dice, and conditionals are used to detemine the next steps. If the player does not contain any point dice,
  then they have a Farkle, which ends their turn, resets the player score set aside, resets the number of dice to 6, and moves on to the 
  next player to the left using the NextPlayer method. If the player does have point dice, a new loop is entered and the player is asked
  for the number of point dice they would like to set aside. A player must set aside at least 1 point dice to continue, but can set aside
  more which is used to populate a vector of point dice. The vector of the selected point dice is then looped through so a user can select
  values for that vector and to determine if the value of the player selected is valid or not, and if that value has three of a kind. If
  the value is valid, the value is checked for three of a kind that gives points for a three of a kind if true. If not true, the value is
  then checked to see if it is a 1 or 5 point dice to set aside those proper points. Each time points are being set aside, those rolls are
  then being set to 0 using the RemoveDice method to prevent extra points from being added and the user is informed of the points they have
  set aside. If a valid dice roll was selected but is not a point dice, the player is informed that the value is not a point dice, and that
  value is removed to prevent the user from being able to use that value. If the value is not valid, the index used to loop through the
  dice rolls the user selected is decremented to allow the player to select a valid value. After setting aside dice rolls, the score of the
  player is then checked to make sure they are allowed to record points or not. If the player score is 0, meaning they have not earned at
  least 1,000 points in a turn, the points they have set aside are checked to see if they combine to make at least 1,000 points. If the 
  points set aside are 1,000 or greater, the player is then informed that they will be able to record more points in upcoming turns, the
  points set aside are recorded as their new score, and the next player will go, resetting values used by each player. If the player was
  unable to earn at least 1,000 points in the turn, they will be informed that in order to record points they must earn at least 1,000
  points in one turn, their points stay at 0, then the play moves on to the next player. After having at least 1,000 points, the next
  turns of the player will allow them the choice to continue to roll or quit and collect the points they have set aside. First, if a player
  sets aside six point dice, they must roll all six one more time before being able to collect points, otherwise the player continues
  their turn using the number of dice minus the dice they have set aside to collect more points, or deciding to end their turn, which allows
  the player to record any points set aside, reset values used within the program, and move on to the next player. Before moving to the
  next player, the program checks the score of the player to determine whether they have one with a score of 10,000 points, determine if
  they have surpassed the winning score, or determine to just continue the game by moving on to the next player. If the player earned a
  score of exactly 10,000 points, the number 1 is returned declaring a winner as true, the main loop of the game is exited, and the game
  ends by demonstrating the name of the winning player and their score. If a player gets over 10,000 points, their turn is considered the
  leading player for the int FarkleGame method and players are informed that they will have one turn to beat the player in the lead. A 
  final round of Farkle is played using the size of the players skipping over the leading player. Each player is given a turn to roll all
  six dice and the total value of those rolls are recorded in their score. Their new score is demonstrated and if they surpassed the score
  of the leading player, there turn will be used as the new leading player until another player surpasses their score. After the final round
  finishes, the program returns the number of the leading player, which is used as the turn index for the vector list of players. The turn
  value is used to output the name of the player and their score, showing their winning status. Finally, the program ends by displaying a
  thanks for playing message, ending the Farkle game program.
 */
#include "Game.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <random>

using namespace std;

// Get time variable
int timeSeed = time(nullptr);

// Method for welcoming players to the Farkle game and allowing input for different choices
void Game::MenuChoice() {
	int choice;

	cout << setw(20) << "Welcome to the Farkle game!" << endl;
	cout << setw(20) << "Please select an option:" << endl;
	cout << "1: Play a Game" << endl;
	cout << "2: Read the rules" << endl;
	cout << "3: Quit" << endl;
	cin >> choice;

	switch (choice)
	{
	// If 1, start FarkleGame method
	case 1:
		FarkleGame();
		break;
	// 2 shows the rules of the Farkle game
	case 2:
		ReadRules();
		break;
	// Anything else quits the program
	default:
		break;
	}
}

// Main Farkle game logic
bool Game::FarkleGame() {
	// Variable declarations
	string playerName;
	int playerScore = 0;
	int numPlayers = 0;
	int turn, setAside;
	int diceRolled = 6;
	vector<int> numbersRolled;
	bool hasPointDice;
	bool isWinner = false;
	char choice;

	// Set random time seed
	srand(timeSeed);

	// Loop until number of player is greater than 1
	while (numPlayers < 2) {
		cout << "How many players will be playing? (must be more than 1)" << endl;
		cin >> numPlayers;

		if (numPlayers < 2) {
			cout << "There must be at least 2 players to start a game!" << endl;
			continue;
		}
	}

	// Declare a vector of players sized with the number of players playing
	vector <Player> playerInfo(numPlayers);

	// Loop and insert player names for the number of players playing
	for (int i = 0; i < playerInfo.size(); i++) {
			cout << "Enter a name for each player: ";
			cin >> playerName;

			playerInfo[i].SetName(playerName);
	}

	// Randomize player turn
	turn = (rand() % playerInfo.size());
	
	// Start rolling for each player turn
	do
	{
		// Clear terminal screen
		system("cls");
		cout << "Player " << playerInfo[turn].GetName() << " is up\n\n";


		// Roll dice not set aside into vector
		numbersRolled = RollDice(diceRolled);

		cout << "Numbers rolled:" << endl;

		// Display all values rolled
		for (int j = 0; j < numbersRolled.size(); j++) {
			cout << numbersRolled[j] << " ";
		}

		// Check if player has point dice
		hasPointDice = HasPointDice(numbersRolled);

		cout << "\n" << "\n";

		// If true, ask player which dice to set aside
		if (hasPointDice == true) {
			
			choice = 'c';
			
			// Continue until choice is q for quit turn
			while (choice != 'q') {
				// Ask how many dice rolls to set aside
				cout << "How many point rolls would you like to set aside? (at least 1) \n";
				cin >> setAside;
				cout << "\n";

				// Keep looping until user selects at least 1 dice
				if (setAside < 1) {
					cout << "Please select at least 1 point dice! \n\n" << endl;
					continue;
				}

				// Populate diceChosen with the number of rolls set aside
				vector<int> diceChosen(setAside);
				int diceAside = 0;

				// Loop through the size of the dice chosen allowing multiple rolls to be selected
				for (int h = 0; h < diceChosen.size(); h++) {
					cout << "\nSelect a roll" << endl;
					cin >> diceChosen[h];

					// Check if the roll is within the numbers rolled.
					if (ValidInput(diceChosen[h], numbersRolled)) {
						// If valid, check if the number has three of a kind
						if (HasThree(diceChosen[h], numbersRolled)) {
							// If true and value is a 1, add 1,000 points to the player score and keep track of the dice set aside
							if (diceChosen[h] == 1) {
								playerScore += 1000;
								diceAside += 3;

								// Remove the values in the vector preventing extra points exploit
								numbersRolled = RemoveDice(diceChosen[h], 3, numbersRolled);
								
								// Show how many points the player set aside
								cout << "\n\n Current points set aside: " << playerScore;
							}
							// If true and value is any other value, store that value times 100 (ex. 2 = 200 points)
							else {
								playerScore += (diceChosen[h] * 100);
								// Keep track of the dice set aside
								diceAside += 3;

								// Remove the values preventing extra points exploit
								numbersRolled = RemoveDice(diceChosen[h], 3, numbersRolled);

								// Show how many points the player set aside
								cout << "\n\n Current points set aside: " << playerScore;
							}
						}
						// If no three of a kind, check to see if the value is a point roll, 1 or 5
						else {
							// If point dice is 1, add 100 points and keep track of the dice set aside
							if (diceChosen[h] == 1) {
								playerScore += 100;
								diceAside += 1;

								// Remove value preventing extra points
								numbersRolled = RemoveDice(diceChosen[h], 1, numbersRolled);

								// Show how many points the player set aside
								cout << "\n\n Current points set aside: " << playerScore;
							}
							// If point dice is 5, add 50 points and keep track of the dice set aside
							else if (diceChosen[h] == 5) {
								playerScore += 50;
								diceAside += 1;

								// Remove value preventing extra points
								numbersRolled = RemoveDice(diceChosen[h], 1, numbersRolled);

								// Show how many points the player set aside
								cout << "\n\n Current points set aside: " << playerScore;
							}
							// Otherwise, the roll selected is not a point dice and is removed
							else {
								cout << "\n\nCannot store value that is not a point dice" << endl;

								// Remove value preventing invalid points
								numbersRolled = RemoveDice(diceChosen[h], 1, numbersRolled);
							}
						}

					}
					// Otherwise, value is not within the rolls the player has
					else {
						cout << "\n\nYou do not have that value!" << endl;
						// Decrement index to allow player to replace the invalid value
						h--;
						continue;
					}
				}

				// If the player's score is 0, check to see the score earned in a turn
				if (playerInfo[turn].GetScore() == 0) {
					// If the player score was 1,000 or greater, inform that the player can not earn more points in their next turns
					if (playerScore >= 1000) {
						cout << "\n\nYou will now be able to continue earning more points in upcoming turns!" << endl;
						cout << "\n\n Points recorded: " << playerScore << endl;
						system("pause");
						// Record the points earned
						playerInfo[turn].SetScore(playerScore);
						// Reset player score to 0
						playerScore = 0;
						// Go to next player
						turn = NextPlayer(turn, numPlayers);
						choice = 'q';
					}
					// If player score was not 1,000 or greater, inform player that they must earn at least 1,000 points in one turn to record
					else {
						cout << "\n\nYou must earn at least 1000 points in one turn to continue earning points!" << endl;
						system("pause");
						// Reset score and move on to the next player
						playerScore = 0;
						turn = NextPlayer(turn, numPlayers);
						choice = 'q';
					}
				}
				// Otherwise, ask player if they would like to continue to earn more points or stop and collect points earned
				else {

					// If the dice set aside were all point dice resulting in the size of 6, player must roll all six dice again
					if (diceAside == 6) {
						cout << "\n\nYou must roll all six dice 1 more time before collecting points!" << endl;
						system("pause");
						diceRolled = 6;

						choice = 'q';
					}
					// Otherwise, allow player to pick to continue or stop
					else {
						cout << "\n\nWould you like to continue (c) or stop and earn points (q)?" << endl;
						cin >> choice;

						// If continuing, roll with leftover dice not set aside
						if (choice == 'c') {
							diceRolled -= diceAside;
							choice = 'q';
						}
						// If quitting, reset dice to number 6
						else if (choice == 'q') {
							diceRolled = 6;

							// Record playerScore and reset the score, moving on to the next player
							playerInfo[turn].SetScore(playerScore);
							cout << "\n\nYour current score is: " << playerInfo[turn].GetScore() << endl;
							system("pause");
							playerScore = 0;

							// If the winning condtion is met, isWinner is true
							if (WinningConditions(playerInfo[turn].GetScore()) == 1) {
								isWinner = true;
							}
							else if (WinningConditions(playerInfo[turn].GetScore()) == 0) {
								turn = FarkleGame(turn, playerInfo);
								isWinner = true;
							}
							// Othewise, move on to the next player
							else {
								turn = NextPlayer(turn, numPlayers);
							}
						}
					}
				}
			}

		}
		// Othewise, player has no point dice, any saved points are not recorded, and end the player's turn
		else {
			cout << "\n\nFARKLE!!! Next player turn" << endl;
			system("pause");
			playerScore = 0;
			diceRolled = 6;
			turn = NextPlayer(turn, numPlayers);
		}

	} while (isWinner != true);			// Keep looping until a winner is true

	// Output the winning player and their score
	system("cls");
	cout << playerInfo[turn].GetName() << " has won with a score of: " << playerInfo[turn].GetScore() << endl;

	return true;
	
}

// Method used for the final round of the game when points is over 10,000 to see if a player can beat the leading player
int Game::FarkleGame(int& leaderTurn, std::vector<Player> numPlayers) {
	// Inform player about the final round
	cout << "Final bonus round reached, points over 10,000! \n\n";
	cout << "Try to beat the leading player in one turn!" << endl;
	system("pause");
	system("cls");

	// Variables for storing different data like the turn of the leading player
	int leadPlayerTurn = leaderTurn;
	int points = 0;
	vector<int> finalRolls(6);

	// Loop through each player one more time
	for (int j = 0; j < numPlayers.size(); j++) {
		// If it is the leading player's turn, skip their turn allowing other players a chance to try to beat their score
		if (j == leadPlayerTurn) {
			continue;
		}
		// Othewise start the turn
		else {
			cout << numPlayers[j].GetName() << " is up!" << endl;

			// Roll the six dice
			finalRolls = RollDice(6);

			cout << "\n\n Here are your final rolls:\n\n";

			// Demonstrate the final rolls the player gets
			for (int h = 0; h < finalRolls.size(); h++) {
				cout << finalRolls[h] << " ";
			}
			cout << endl;
			system("pause");

			// Use to calculate the total possible points a player can earn
			for (int k = 0; k < finalRolls.size(); k++) {
				// If three of a kind add points for three of a kind dice rolls
				if (HasThree(finalRolls[k], finalRolls)) {
					// If there are three 1s, add 1,000 points
					if (finalRolls[k] == 1) {
						points += 1000;

						// Remove the points to prevent additional points from being added
						finalRolls = RemoveDice(finalRolls[k], 3, finalRolls);
					}
					// If removed dice rolls leaves three 0s, just continue
					else if (finalRolls[k] == 0) {
						continue;
					}
					// Otherwise, add the number times 100 to the points
					else {
						points += (finalRolls[k] * 100);

						// Remove the points to prevent additional points from being added
						finalRolls = RemoveDice(finalRolls[k], 3, finalRolls);
					}
				}
				// Else check for rolls of 1 or 5
				else {
					// Add 100 points for 1s that are not of three of a kind
					if (finalRolls[k] == 1) {
						points += 100;
					}
					// Add 50 points for 5s that are not of three of a kind
					else if (finalRolls[k] == 5) {
						points += 50;
					}
				}
			}
		}

		// Inform player of the total possible points they earned
		cout << "\n\nPossible points earned: " << points << endl;
		// Set the score of the player with the new points
		numPlayers[j].SetScore(points);
		// Demonstrate the total score after adding the points earned
		cout << "Total score: " << numPlayers[j].GetScore() << "\n\n";
		system("pause");

		// If the player gets a higher score than the leading player, output that player as the new leader with their score
		if (numPlayers[j].GetScore() > numPlayers[leadPlayerTurn].GetScore()) {
			
			cout << numPlayers[j].GetName() << " is now the leading player with " << numPlayers[j].GetScore() << " points!\n\n";
			// That player is now the leading player
			leadPlayerTurn = j;
			system("pause");
		}
		// If player gets a lower score, show the leading player as the leader with the score to beat
		else {
			cout << numPlayers[leadPlayerTurn].GetName() << " is still the leader with " << numPlayers[leadPlayerTurn].GetScore() 
				 << " points!\n\n";
			system("pause");
		}
	}

	// Return the leading player as the winner
	return leadPlayerTurn;
}

// Method used to manage player turns
int Game::NextPlayer(int& nextTurn, int& totalPlayers) {
	// If the turn index is 0 getting the first player's turn, return the final player turn by the total players minus 1
	if (nextTurn == 0) {
		return totalPlayers - 1;
	}
	// Othewise, return the next turn subtracted by 1
	else {
		return nextTurn -= 1;
	}
}

// Method for rolling all dice returning each value
vector<int> Game::RollDice(int quantity) {
	vector<int> dice(quantity);

	// Loop through the quantity, declaring each element in the vector with a number between 1-6
	for (int i = 0; i < quantity; i++) {
		dice[i] = (rand() % 6) + 1;
	}

	return dice;
}

// Method compares values of each vector, checking if there are any point dice (a 1, 5, or three of a kind)
bool Game::HasPointDice(vector<int> diceVal) {
	// Loop for checking each value of the dice
	for (int j = 0; j < diceVal.size(); j++) {
		// Variable to store like dice rolls
		int three = 0;

		// Inner loop for incrementing three variable to check for three of a kind
		for (int h = j; h < diceVal.size(); h++) {
			if (diceVal[j] == diceVal[h]) {
				three++;
			}
			// If any dice is a point dice 1 or 5, return true
			if (diceVal[h] == 1 || diceVal[h] == 5) {
				return true;
			}
		}
		// If the three variable is greater than 2, at least three of a kind, return true
		if (three > 2) {
			return true;
		}
	}
	// Otherwise, return false
	return false;
}

// Method checks if the value the player selected has three of a kind through all six rolls
bool Game::HasThree(int& value, vector<int> checkVals) {
	int hasThree = 0;

	// Loop through each value
	for (int i = 0; i < checkVals.size(); i++) {
		// If value is within the six rolls, increment the hasThree variable
		if (value == checkVals[i]) {
			hasThree += 1;
		}
	}
	// If hasThree is greater than 2, there are three of a kind, returning true
	if (hasThree > 2) {
		return true;
	}
	// Otherwise return false
	return false;
}

// Method checks if a player has selected valid input within their rolled numbers
bool Game::ValidInput(int& decision, vector<int> validRolls) {
	bool valid = false;
	
	// Check if the number is within the rolled numbers
	for (int j = 0; j < validRolls.size(); j++) {
		// If yes, return true and break out of loop
		if (decision == validRolls[j]) {
			valid = true;
			break;
		}
	}
	// Return the value of valid
	return valid;
}

// Method used to remove dice rolls that have been set aside
vector <int> Game::RemoveDice(int& selected, int times, vector<int> allDice) {
	// Loop through the passed allDice vector values
	for (int j = 0; j < allDice.size(); j++) {
		// If the value of the index equals the value a player selected, remove value by setting it to 0 and decrement the times selected
		if (allDice[j] == selected) {
			allDice[j] = 0;
			--times;
		
		}
		// If the times selected is at 0, break out of loop to prevent other values from getting set to 0
		if (times == 0) {
			break;
		}
	}

	// Return the modified vector
	return allDice;
}

// Method checks if the winning condition is met
int Game::WinningConditions(int score) {
	// If a score of 10000 was achieved, return a 1 meaning there is a winner
	if (score == 10000) {
		return 1;
	}
	// If a higher score was achieved, return a 0 meaning there will be a bonus final round
	else if (score > 10000) {
		return 0;
	}
	// Othewise no winner, return a -1
	else {
		return -1;
	}
}

// Method reads the Farkle Rules.txt file for learning how to play
void Game::ReadRules() {
	fstream ruleFile;
	string line;

	// Open file
	ruleFile.open("Farkle Rules.txt");

	// If opened successfully, demonstrate each rule line by line and wait for input to continue
	if (ruleFile) {
		system("cls");
		while (getline(ruleFile, line)) {
			cout << line << "\n" << "\n";
		}
		system("pause");
		system("cls");
	}
	// Otherwise, inform user file did not open properly
	else {
		cout << "File not opened properly, please try again" << endl;
		system("pause");
	}

	// Return to menu
	MenuChoice();
}