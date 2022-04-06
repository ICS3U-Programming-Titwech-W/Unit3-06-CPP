// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: April.5. 2022

// the program asks the user for a number
// then tell them if they are correct
// program uses random generator

#include <iostream>
#include <random>

int main() {
    // Random number gentator
    int someRandomNumber;

    std::random_device rseed;

    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 10);  // [0,100]

    someRandomNumber = idist(rgen);
    // std::cout << someRandomNumber << std:endl;
    // declare variables
    std::string intergerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter a integer between (0-10): ";
    std::cin >> intergerAsString;
    std::cout << "";

    // functions for my number
    int numGuess;
try {
    // convert the user's guess to an int
    integerAsNumber = std::stoi(intergerAsString);

    // check if the guess is correct
    if (numGuess == someRandomNumber) {
        std::cout << "You guessed right!";

    } else {
    std::cout << "You guessed wrong my number is: " \
        << someRandomNumber << "\n";
}
} catch (std::invalid_argument) {
    // The user did not enter an integer.

    std::cout << intergerAsString << " is not an integer.\n";
  }
}
