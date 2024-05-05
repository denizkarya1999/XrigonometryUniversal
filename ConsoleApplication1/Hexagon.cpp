#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Hexagon
    {
    private:
        string _name;
        string type;
        double a;
        double l;

    public:
        // Constructor
        Hexagon(string hexagonName, string objectType, double a, double l)
            : _name(hexagonName), type(objectType), a(a), l(l) {}

        // Setters
        void setName(string targetName) { _name = targetName; }
        void setA(double a) { this->a = a; }
        void setL(double l) { this->l = l; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getA() { return a; }
        double getL() { return l; }

        // Area method
        double Area()
        {
            return ((3 * sqrt(3)) / 2) * pow(a, 2);
        }

        // Perimeter method
        double Perimeter()
        {
            return 6 * a;
        }
    };
}
