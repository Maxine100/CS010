#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;
int winner = -1;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen() {
	cout << endl;
	
	if (CLEAR_SCREEN) {
		cout << "\033c";
	}

	cout << endl;

	return;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector<char> &gameBoard) {
	clearScreen();
	for (int i = 0; i < 9; i += 3) {
		cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  " << gameBoard.at(i + 2) << "  " << endl;
		if (i < 6) {
			cout << "-----|-----|-----" << endl;
		}
	}
	cout << endl;

	return;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 3 then it will have characters a to c.
///     If the vector is size 5 then it will have characters a to e.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector<char> &v) {

	// TODO: implement function
	char character = 'a';
	for (int i = 0; i < v.size(); ++i) {
		v.at(i) = character;
		++character;
	}
	return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {

	// TODO: implement function
	int associatedVectorIndex = boardPosition - 'a';
	return associatedVectorIndex;
	// return -1;
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char> &gameBoard, int positionIndex) {

	// TODO: implement function
	if (gameBoard.at(positionIndex) != 'X' && gameBoard.at(positionIndex) != 'O' && positionIndex < gameBoard.size() && positionIndex >= 0) {
	return true;
	}
	return false;
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {

	// TODO: implement function
	char boardPosition = ' ';
	
	cout << "Please choose a position: ";
	cin >> boardPosition;
	cout << endl;
	int convertedPosition = convertPosition(boardPosition);
	if (validPlacement(gameBoard, convertedPosition)) {
		return convertedPosition;
	}
	else {
		return getPlay(gameBoard);
	}

	// return -1;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {

	// TODO: implement function
	if ((gameBoard.at(0) == 'X' && gameBoard.at(1) == 'X' &&  gameBoard.at(2) == 'X' ) || (gameBoard.at(3) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(5) == 'X' )|| (gameBoard.at(6) == 'X' && gameBoard.at(7) == 'X' && gameBoard.at(8) == 'X' ) || (gameBoard.at(0) == 'X' && gameBoard.at(3) == 'X' && gameBoard.at(6) == 'X' ) || (gameBoard.at(1) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(7) == 'X' ) || (gameBoard.at(2) == 'X' && gameBoard.at(5) == 'X' && gameBoard.at(8) == 'X' ) || (gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(8) == 'X' ) || (gameBoard.at(2) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(6) == 'X' )) {
		winner = 0;
		return true;
	}
    
	else if ((gameBoard.at(0) == 'O' && gameBoard.at(1) == 'O' && gameBoard.at(2) == 'O' ) || (gameBoard.at(3) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(5) == 'O' )|| (gameBoard.at(6) == 'O' && gameBoard.at(7) == 'O' && gameBoard.at(8) == 'O' ) || (gameBoard.at(0) == 'O' && gameBoard.at(3) == 'O' && gameBoard.at(6) == 'O' ) || (gameBoard.at(1) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(7) == 'O' ) || (gameBoard.at(2) == 'O' && gameBoard.at(5) == 'O' && gameBoard.at(8) == 'O' ) || (gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(8) == 'O' ) || (gameBoard.at(2) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(6) == 'O' )) {
		winner = 1;
		return true;
	}
	return false;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {

	// TODO: implement function
	if (gameBoard.at(0) != 'a' && gameBoard.at(1) != 'b' && gameBoard.at(2) != 'c' && gameBoard.at(3) != 'd' && gameBoard.at(4) != 'e' && gameBoard.at(5) != 'f' && gameBoard.at(6) != 'g' && gameBoard.at(7) != 'h' && gameBoard.at(8) != 'i') {
		return true;
	}
	return false;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
	// Variables that you may find useful to utilize
	vector<char> gameBoard(9);
	int curPlay = PLAYER1;
	// int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'
	
	/// TODO: Initialize board to empty state
	initVector(gameBoard);
	
	/// TODO: Display empty board
	drawBoard(gameBoard);
	
	
	/// TODO: Play until game is over
	
		/// TODO: Get a play
		
		/// TODO: Set the play on the board
		
		/// TODO: Switch the turn to the other player
		
		/// TODO: Output the updated board
		
	do {
		int a = getPlay(gameBoard);
		if (curPlay == PLAYER1) {
			gameBoard.at(a) = 'X';
			drawBoard(gameBoard);
			curPlay = PLAYER2;
		}
		else if (curPlay == PLAYER2) {
			gameBoard.at(a) = 'O';
			drawBoard(gameBoard);
			curPlay = PLAYER1;
		}
	} while (!boardFull(gameBoard) && !gameWon(gameBoard));
	
	
	/// TODO: Determine winner and output appropriate message
	if (boardFull(gameBoard) || gameWon(gameBoard)) {
		if (boardFull(gameBoard)) {
			if (gameWon(gameBoard)) {
				if (winner == 0) {
					cout << "PLAYER 1 WINS! " << endl;
				}
				else if (winner == 1) {
					cout << "PLAYER 2 WINS! " << endl;
				}
			}
			else if (!gameWon(gameBoard)) {
				cout << "No one wins" << endl;
			}
		}
		else if (!boardFull(gameBoard)) {
			if (gameWon(gameBoard)) {
				if (winner == 0) {
					cout << "PLAYER 1 WINS! " << endl;
				}
				else if (winner == 1) {
					cout << "PLAYER 2 WINS! " << endl;
				}
			}
		}
	}
	
	return 0;
}
