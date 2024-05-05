#include <iostream>
#include <string>
#include <cmath>

namespace objects
{
    class Triangle
    {
    private:
        std::string _name;
        std::string type;
        double a;
        double b;
        double c;
        double h;

    public:
        // Constructor
        Triangle(std::string triangleName, std::string objectType, double a, double b, double c, double h)
            : _name(triangleName), type(objectType), a(a), b(b), c(c), h(h) {}

        // Setters
        void setName(std::string targetName) { _name = targetName; }
        void setA(double a) { this->a = a; }
        void setB(double b) { this->b = b; }
        void setC(double c) { this->c = c; }
        void setH(double h) { this->h = h; }

        // Getters
        std::string getName() { return _name; }
        std::string getType() { return type; }
        double getA() { return a; }
        double getB() { return b; }
        double getC() { return c; }
        double getH() { return h; }

        // Area method
        double Area()
        {
            return (b * h) / 2;
        }

        // Perimeter method
        double Perimeter()
        {
            return a + b + c;
        }
    };
}