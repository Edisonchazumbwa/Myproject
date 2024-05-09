#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;

    Rectangle rect1;
    rect1.setLength(length);
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rect2(length, width); // Using the overloaded constructor

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}