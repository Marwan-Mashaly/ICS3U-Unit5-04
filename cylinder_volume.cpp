// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program calculates the area of a triangle
# define M_PI           3.14159265358979323846  /* pi */
#include <iostream>
#include <cmath>

float volume_calc(int rad, int intH) {
    // This function calculates the volume of the cylinder
    float volume;

    volume = M_PI*pow(rad, 2)*intH;
    return volume;
}


main() {
    // This function calls the other function and takes user input
    std::string height;
    std::string radius;
    int heightCheck;
    int radiusCheck;
    double solution;

    std::cout << "Enter the height of the cylinder (mm): ";
    std::cin >> height;
    std::cout << "Enter the radius of your cylinder (mm) ";
    std::cin >> radius;
    std::cout << "" << std::endl;

    try {
        heightCheck = std::stoi(height);
        radiusCheck = std::stoi(radius);

        solution = volume_calc(radiusCheck, heightCheck);
        std::cout << "The volume of the cylinder is: " << solution
                                                       << "mm^2" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Number";
        std::cout << " " << std::endl;
    }
}
