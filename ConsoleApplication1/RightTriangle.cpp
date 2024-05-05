#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class RightTriangle
    {
    private:
        string _name;
        string type;
        double x;
        double y;
        double z;
        string hypotenuse;

    public:
        // Constructor
        RightTriangle(string triangleName, string objectType, double x, double y)
            : _name(triangleName), type(objectType), x(x), y(y), z(1), hypotenuse(triangleName + "'s Hypotenuse") {}

        // Setters
        void setName(string targetName) {
            _name = targetName;
            hypotenuse = targetName + "'s Hypotenuse";
        }
        void setX(double x) { this->x = x; }
        void setY(double y) { this->y = y; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getX() { return x; }
        double getY() { return y; }
        double getZ() { return z; }
        string getHypotenuse() { return hypotenuse; }

        // Trigonometric functions
        double sin() { return y / hypotenuseLength(); }
        double cos() { return x / hypotenuseLength(); }
        double tan() { return y / x; }
        double cot() { return 1 / tan(); }
        double csc() { return 1 / sin(); }
        double sec() { return 1 / cos(); }

    private:
        // Helper function to calculate hypotenuse length
        double hypotenuseLength() { return sqrt(x * x + y * y); }
    };
}