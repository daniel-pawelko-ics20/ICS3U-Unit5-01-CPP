// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Functions and what not

#include <iostream>
#include <string>
using namespace std;

void fahrenheit() {
    string temp;
    float celsius;
    float tf;

    try {
        // input
        std::cout << "Enter a temperature (°C): " << std::endl;
        std::cin >> temp;
        celsius = stof(temp);

        // process
        tf = (9.0 / 5.0) * celsius + 32.0;

        // output
        std::cout << celsius << "°C is equal to " << tf << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Please input a number" << std::endl;
    }
}


int main() {
    // main function for function program

    fahrenheit();

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
