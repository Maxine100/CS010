#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}

void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}

void initVector(vector <char> &v) {
    char letter = 'a';
    for (int i = 0; i < v.size(); ++i) {
        v.at(i) = letter;
        ++letter;
    }
    return;
}

int convertPosition(char boardPosition) {
    
    int x = boardPosition - 'a';
    
    return x;
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {

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


    return -1;
}

bool gameWon(const vector<char> &gameBoard) {
    
    if ((gameBoard.at(0) == 'X' && gameBoard.at(1) == 'X' && 
        gameBoard.at(2) == 'X' ) || (gameBoard.at(3) == 'X' && 
        gameBoard.at(4) == 'X' && gameBoard.at(5) == 'X' )|| 
        (gameBoard.at(6) == 'X' && gameBoard.at(7) == 'X' && 
        gameBoard.at(8) == 'X' ) || (gameBoard.at(0) == 'X' && 
        gameBoard.at(3) == 'X' && gameBoard.at(6) == 'X' ) || 
        (gameBoard.at(1) == 'X' && gameBoard.at(4) == 'X' && 
        gameBoard.at(7) == 'X' ) || (gameBoard.at(2) == 'X' && 
        gameBoard.at(5) == 'X' && gameBoard.at(8) == 'X' ) || 
        (gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X' && 
        gameBoard.at(8) == 'X' ) || (gameBoard.at(2) == 'X' && 
        gameBoard.at(4) == 'X' && gameBoard.at(6) == 'X' )) {
            return true;
        }
    
    else if ((gameBoard.at(0) == 'O' && gameBoard.at(1) == 'O' && 
        gameBoard.at(2) == 'O' ) || (gameBoard.at(3) == 'O' && 
        gameBoard.at(4) == 'O' && gameBoard.at(5) == 'O' )|| 
        (gameBoard.at(6) == 'O' && gameBoard.at(7) == 'O' && 
        gameBoard.at(8) == 'O' ) || (gameBoard.at(0) == 'O' && 
        gameBoard.at(3) == 'O' && gameBoard.at(6) == 'O' ) || 
        (gameBoard.at(1) == 'O' && gameBoard.at(4) == 'O' && 
        gameBoard.at(7) == 'O' ) || (gameBoard.at(2) == 'O' && 
        gameBoard.at(5) == 'O' && gameBoard.at(8) == 'O' ) || 
        (gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O' && 
        gameBoard.at(8) == 'O' ) || (gameBoard.at(2) == 'O' && 
        gameBoard.at(4) == 'O' && gameBoard.at(6) == 'O' )) {
            return true;
        }
        
    return false;
}

bool boardFull(const vector<char> &gameBoard) {
    
    if (gameBoard.at(0) != 'a' && gameBoard.at(1) != 'b' && 
        gameBoard.at(2) != 'c' && gameBoard.at(3) != 'd' && 
        gameBoard.at(4) != 'e' && gameBoard.at(5) != 'f' && 
        gameBoard.at(6) != 'g' && gameBoard.at(7) != 'h' && 
        gameBoard.at(8) != 'i') {
            return true;
        }
        
    return false;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    // Variables that you may find useful to utilize
    vector<char> v(9);
    vector<char> gameBoard(9);
    char letter;
    // int curPlay;
    // int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'

    /// TODO: Initialize board to empty state

    /// TODO: Display empty board
    
    initVector(v);
    gameBoard = v;
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'X';
    
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'O';
    
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'X';
    
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'O';
    
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'X';
    
    drawBoard(gameBoard);
    
    cout << "Please choose a position: " << endl;
    
    cin >> letter;
    
    gameBoard.at(convertPosition(letter)) = 'O';
    
    drawBoard(gameBoard);
    
    cout << "PLAYER 2 WINS!" << endl;


    /// TODO: Play until game is over

        /// TODO: Get a play

        /// TODO: Set the play on the board

        /// TODO: Switch the turn to the other player

        /// TODO: Output the updated board


    /// TODO: Determine winner and output appropriate message

    return 0;
}
