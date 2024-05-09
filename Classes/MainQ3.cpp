#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;

int main() {
    char choice;

    do {
        std::cout << "Select a shape to calculate its area:" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Triangle" << std::endl;
        std::cout << "3. Circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;

                Square square(side);
                double area = Area::calculateSquareArea(square);
                std::cout << "Area of the square: " << area << std::endl;
                break;
            }
            case '2': {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;

                Triangle triangle(base, height);
                double area = Area::calculateTriangleArea(triangle);
                std::cout << "Area of the triangle: " << area << std::endl;
                break;
            }
            case '3': {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;

                Circle circle(radius);
                double area = Area::calculateCircleArea(circle);
                std::cout << "Area of the circle: " << area << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != '4');

    return 0;
}
