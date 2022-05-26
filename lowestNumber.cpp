// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program creates 10 random numbers & finds lowest number

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int findLowest(std::array<int, N> listOfNumbers) {
    // this function finds the lowest number in a list
    int lowest = listOfNumbers[9];

    for (int loopItem : listOfNumbers) {
        if (loopItem < lowest) {
            lowest = loopItem;
        }
    }

    return lowest;
}

int main() {
    // this function creates 10 random numbers in a list
    std::array<int, 10> listOfNumbers;
    int loopCounter = 0;
    int randomNumber;
    int lowest;
    int lowestNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  // [1, 100]

    // input, process & output
    for (int loopCounter = 0; loopCounter <= 9; loopCounter++) {
        randomNumber = idist(rgen);
        listOfNumbers[loopCounter] = (randomNumber);
        std::cout << "The random number " << loopCounter + 1 << " is : "
            << randomNumber << std::endl;
    }
    lowestNumber = findLowest(listOfNumbers);
    std::cout << "\n\nThe lowest number is " << lowestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
