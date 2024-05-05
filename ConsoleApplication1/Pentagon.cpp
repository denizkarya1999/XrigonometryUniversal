#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace objects
{
    class Pentagon
    {
    private:
        string _name;
        string type;
        double a;
        double b;
        double c;
        double d;
        double e;
        double s;

    public:
        // Constructor
        Pentagon(string pentagonName, string objectType,
            double a, double b, double c, double d, double e, double s)
            : _name(pentagonName), type(objectType), a(a), b(b), c(c), d(d), e(e), s(s) {}

        // Setters
        void setName(string targetName) { _name = targetName; }
        void setA(double a) { this->a = a; }
        void setB(double b) { this->b = b; }
        void setC(double c) { this->c = c; }
        void setD(double d) { this->d = d; }
        void setE(double e) { this->e = e; }
        void setS(double s) { this->s = s; }

        // Getters
        string getName() { return _name; }
        string getType() { return type; }
        double getA() { return a; }
        double getB() { return b; }
        double getC() { return c; }
        double getD() { return d; }
        double getE() { return e; }
        double getS() { return s; }

        // Area method
        double Area()
        {
            return (1.0 / 4) * (sqrt(5 * (5 + (2 * sqrt(5)))) * pow((Perimeter() / 5), 2));
        }

        // Perimeter method
        double Perimeter()
        {
            return a + b + c + d + e;
        }
    };
}