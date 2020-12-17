// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program converts fahrenheit to celsius

#include <iostream>

int area_of_triangle(int base, int height) {
    // calculate area

    double area;

    // 2.0 is to make sure that, if there are decimals, they will be shown
    area = base * height / 2.0;

    std::cout << "The area is " << area << "cm²" << std::endl;
}

int main() {
    // This function calls gets inputs, checks them for errors and
    // calls the specified functions

    std::string base_from_user_str;
    std::string height_from_user_str;
    int base_from_user;
    int height_from_user;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the"
          " area of a triangle" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input the base and height" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Base: ";
    std::cin >> base_from_user_str;
    std::cout << "Height: ";
    std::cin >> height_from_user_str;
    std::cout << "" << std::endl;

    try {
        base_from_user = std::stoi(base_from_user_str);
        height_from_user = std::stoi(height_from_user_str);

        if (base_from_user > 0 && height_from_user > 0) {
            area_of_triangle(base_from_user, height_from_user);
        } else {
            std::cout << "Please enter positive values"
              " for base and height" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a real base and height" << std::endl;
    }
}
