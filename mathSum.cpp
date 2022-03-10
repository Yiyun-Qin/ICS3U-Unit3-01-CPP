// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, calculating the sum of two numbers

#include <iostream>

int main() {
    // This is a math program, calculating the sum of two numbers
    int firstNumber;
    int secondNumber;
    int answerSum;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> secondNumber;

    // process
    answerSum = firstNumber + secondNumber;

    // output
    std::cout << std::endl;
    std::cout << firstNumber << " + "
    << secondNumber << " = " << answerSum << std::endl;

    std::cout << "\nDone." << std::endl;
}
