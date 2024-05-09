#pragma once
namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square();
        Square(double side);
        ~Square();
        void setSideLength(double side);
        double getSideLength() const;
    };
}

