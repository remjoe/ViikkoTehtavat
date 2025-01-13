#include <iostream>
#include "Game.h"


Game::Game(int maxNum) {
    unsigned seed = time(0); // Using system time as a decent random seed
    std::srand(seed);

    maxNumber = maxNum;
    randomNumber = 1 + (rand() % maxNumber);
    std::cout << "GAME CONSTRUCTOR: object initialized with " << maxNum << " as a maximum value" << std::endl;
}

Game::~Game() {
    printGameResult();
    std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
}

void Game::printGameResult() {
    std::cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << std::endl;
}

void Game::play() {
    numOfGuesses++;
    std::cout << "Give your guess between 1-" << maxNumber << std::endl;
    std::cin >> playerGuess;
    if (playerGuess > randomNumber) {
        std::cout << "Your guess is too big" << std::endl;
        play();
    } else if (playerGuess < randomNumber) {
        std::cout << "Your guess is too small" << std::endl;
        play();
    } else {
        std::cout << "Your guess is right = " << playerGuess << std::endl;
    }
}
