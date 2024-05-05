#include <iostream>
#include <string>
#include <cmath>

namespace objects
{
    class Square
    {
    private:
        std::string _name;
        std::string type;
        double s;

    public:
        // Constructor
        Square(std::string squareName, std::string objectType, double s)
            : _name(squareName), type(objectType), s(s) {}

        // Setters
        void setName(std::string targetName) { _name = targetName; }
        void setS(double s) { this->s = s; }

        // Getters
        std::string getName() { return _name; }
        std::string getType() { return type; }
        double getS() { return s; }

        // Area method
        double Area()
        {
            return std::pow(s, 2);
        }

        // Perimeter method
        double Perimeter()
        {
            return 4 * s;
        }
    };
}