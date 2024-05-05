#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Sphere
    {
    private:
        string _name;
        string type;
        double radius;
        double diameter;
        double pi;
     
    public:
        //Declare constructor
        Sphere(string sphereName, string objectType, float targetRadius, float targetDiameter)
        {
            _name = sphereName;
            type = objectType;
            radius = targetRadius;
            diameter = targetDiameter;
            pi = 3.141592653589793238462643383279502884197;
        }


        //Setters
        void setName(string targetName) { this->_name = targetName; }
        void setRadius(double targetRadius) { this->radius = targetRadius; }
        void setDiameters(double targetDiameter) { this->diameter = targetDiameter; }

        //Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getRadius() { return this->radius; }
        double getDiameter() { return this->diameter; }

        //Volume method
        double Volume()
        {
            return (4 * this->pi * pow(this->radius, 3)) / 3;
        }

        //Surface Area method
        double SurfaceArea()
        {
            return 4 * this->pi * pow(this->radius, 2);
        }
    };
}