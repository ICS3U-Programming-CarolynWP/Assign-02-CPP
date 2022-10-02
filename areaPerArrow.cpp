// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/01
// Uses user input for the length, width,
// base, height, and sides of an arrow and
// calculates the area and perimeter then
// displays it back to the user

#include <iostream>

// variables that will be used
float length;
float width;
float base;
float height;
float side;
float area;
float perim;

int main() {
    // unit variable
    std::string units;

    // title
    std::cout << ">>>>>>>_____________________|`-._\n";
    std::cout << ">>>>>>>                     |.-'\n";
    std::cout << "Area and perimeter of an arrow\n";

    // arrow base user input
    std::cout << " _________\n";
    std::cout << "|         |\n";
    std::cout << "|_________|\n";
    std::cout << "Enter the length here: ";
    std::cin >> length;
    std::cout << "Enter the width here: ";
    std::cin >> width;

    // spacer
    std::cout << "\n";

    // arrow tip user input
    std::cout << "    _\n";
    std::cout << ".-'` |\n";
    std::cout << "`'-._|\n";
    std::cout << "Enter the base here: ";
    std::cin >> base;
    std::cout << "Enter the height here: ";
    std::cin >> height;
    std::cout << "Enter the sides here: ";
    std::cin >> side;

    // spacer
    std::cout << "\n";

    // units user input
    std::cout << "What are the units for your arrow?: ";
    std::cin >> units;

    // calculations
    area = (length * width) + (base * height / 2);
    perim = (2 * (length + width)) + (2 * side + base);

    // spacer
    std::cout << "\n";

    // output
    std::cout << std::endl;
    std::cout << "Your area is " << area << units << "^2!\n";
    std::cout << "Your perimeter is " << perim << units << "!\n";
}
