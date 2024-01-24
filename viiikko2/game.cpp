#include "game.h"
using namespace std;

Game::Game(int maxNum): maxNumber(maxNum), numOfGuesses(0)
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with" << maxNumber << " as a maximum value" <<endl;
}
Game::~Game(){
    cout<< "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    do {
    cout<< "Give your guess between 1-" << maxNumber << endl;
    cin>>playerGuess;

    numOfGuesses++;
    if(playerGuess > randomNumber)
    {
        cout<< "Your guess is too big " <<endl;

    }
    else if(playerGuess<randomNumber)
    {
        cout<< "your guess is too small" <<endl;

    }
    else {
        cout<< "your guess is right" << playerGuess <<endl;
        printGameResult();
    }
    } while (playerGuess != randomNumber);
}


void Game::printGameResult()
{
    cout<< "you guessed the right answer = " << randomNumber<< "with" << numOfGuesses << "guesses" <<endl;

}
