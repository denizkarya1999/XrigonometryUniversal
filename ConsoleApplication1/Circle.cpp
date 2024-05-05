#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Circle
    {
    private:
        string _name;
        string type;
        double r;
        double pi;

    public:
        // Constructor
        Circle(string circleName, string objectType, double r)
            : _name(circleName), type(objectType), r(r), pi(3.141592653589793238462643383279502884197) {}

        // Setters
        void setName(string targetName) { _name = targetName; }
        void setR(double targetR) { r = targetR; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getR() { return r; }

        // Area formula
        double Area()
        {
            return pi * pow(r, 2);
        }

        // Circumference formula
        double Circumference()
        {
            return 2 * pi * r;
        }
    };
}