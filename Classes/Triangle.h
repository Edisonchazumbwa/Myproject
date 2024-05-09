#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();
        void setBase(double b);
        void setHeight(double h);
        double getBase() const;
        double getHeight() const;
    };
}

