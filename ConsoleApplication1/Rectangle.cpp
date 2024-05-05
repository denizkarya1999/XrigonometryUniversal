#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Rectangle
    {
    private:
        string _name;
        string type;
        double width;
        double diagonal;
        double length;

    public:
        // Constructor
        Rectangle(string rectangleName, string objectType, double targetWidth, double targetDiagonal, double targetLength)
            : _name(rectangleName), type(objectType), width(targetWidth), diagonal(targetDiagonal), length(targetLength) {}

        // Setters
        void setName(string targetName) { _name = targetName; }
        void setWidth(double targetWidth) { width = targetWidth; }
        void setDiagonal(double targetDiagonal) { diagonal = targetDiagonal; }
        void setLength(double targetLength) { length = targetLength; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getWidth() { return width; }
        double getDiagonal() { return diagonal; }
        double getLength() { return length; }

        // Area method
        double Area()
        {
            return length * width;
        }

        // Perimeter method
        double Perimeter()
        {
            return 2 * (length + width);
        }
    };
}