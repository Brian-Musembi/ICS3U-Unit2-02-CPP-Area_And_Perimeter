// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 23 April 2021
// This program calculates the area and perimeter of a rectangle


#include <iostream>
#include <cmath>

int main() {
  int lengthOfRectangle;
  int widthOfRectangle;
  int areaOfRectangle;
  int perimeterOfRectangle;

  std::cout << "Enter the length of the rectangle (mm): ";
  std::cin >> lengthOfRectangle;
  std::cout << "Enter the width of the rectangle (mm): ";
  std::cin >> widthOfRectangle;

  areaOfRectangle = (lengthOfRectangle * widthOfRectangle);
  perimeterOfRectangle = 2 * (lengthOfRectangle + widthOfRectangle);

  std::cout << "" << std::endl;
  std::cout << "Area is: " << areaOfRectangle << " mm²." << std::endl;
  std::cout << "Perimeter is: " << perimeterOfRectangle << " mm." << std::endl;
  std::cout << std::endl;
  std::cout << "Done." << std::endl;}
