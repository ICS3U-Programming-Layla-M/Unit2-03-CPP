// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 4, 2021
// This program calculates the circumference of a
// circle using Tau and user input.

#include <iostream>


const float TAU = 6.28;


int main() {
    // declare variables
    float radius, circ;

    // welcome message
    std::cout << "Hello today we will calculate the circumference"
    "of a circle! \n";

    // get the user input
    std::cout << "First, enter the radius of the circle (cm): ";
    std::cin >> radius;

    // calculate the circumference
    circ = TAU*radius;

    // display the circumference
    std::cout << "The circumference is: " << circ << " cm^2\n";
}
