#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Polygon
    {
    private:
        string _name;
        string type;
        double n;

    public:
        // Constructor
        Polygon(string polygonName, string objectType, double n)
            : _name(polygonName), type(objectType), n(n) {}

        // Setters
        void setName(string targetName) { _name = targetName; }
        void setN(double n) { this->n = n; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getN() { return n; }

        // Sum of angles method
        double sumOfAllAngles()
        {
            return (n - 2) * 180;
        }

        // Each angle of a polygon method
        double eachAngleOfPolygon()
        {
            return ((n - 2) * 180) / n;
        }

        // Number of diagonals of a polygon
        double polygonDiagonals()
        {
            return (n * (n - 3)) / 2;
        }

        // Sum of all exterior angles of a polygon
        double SumOfExteriorPolygons()
        {
            return 360;
        }
    };
}
