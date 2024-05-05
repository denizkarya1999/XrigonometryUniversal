//Include files
#include <iostream>
#include "Triangle.cpp"
#include "Square.cpp"
#include "Sphere.cpp"
#include "Rectangle.cpp"
#include "Polygon.cpp"
#include "Pentagon.cpp"
#include "Hexagon.cpp"
#include "Circle.cpp"
#include "RightTriangle.cpp"

// Include namespaces
using namespace std;
using namespace objects;

int main()
{
    Triangle triangle("MyTriangle", "Equilateral", 3, 4, 5, 6);
    cout << "Triangle Name: " << triangle.getName() << endl;
    cout << "Type: " << triangle.getType() << endl;
    cout << "Side A: " << triangle.getA() << endl;
    cout << "Side B: " << triangle.getB() << endl;
    cout << "Side C: " << triangle.getC() << endl;
    cout << "Height: " << triangle.getH() << endl;
    cout << "Area: " << triangle.Area() << endl;
    cout << "Perimeter: " << triangle.Perimeter() << endl;

    cout << "" << endl;

    Square square("MySquare", "Regular", 5);
    cout << "Square Name: " << square.getName() << endl;
    cout << "Type: " << square.getType() << endl;
    cout << "Side Length: " << square.getS() << endl;
    cout << "Area: " << square.Area() << endl;
    cout << "Perimeter: " << square.Perimeter() << endl;

    cout << "" << endl;

    Sphere sphere("MySphere", "Regular", 4, 6);
    cout << "Sphere Name: " << sphere.getName() << endl;
    cout << "Type: " << sphere.getType() << endl;
    cout << "Radius: " << sphere.getRadius() << endl;
    cout << "Diameter: " << sphere.getDiameter() << endl;
    cout << "Volume: " << sphere.Volume() << endl;
    cout << "Surface Area: " << sphere.SurfaceArea() << endl;

    cout << "" << endl;

    Rectangle rectangle("MyRectangle", "Regular", 4, 5, 6);
    cout << "Rectangle Name: " << rectangle.getName() << endl;
    cout << "Type: " << rectangle.getType() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Diagonal: " << rectangle.getDiagonal() << endl;
    cout << "Area: " << rectangle.Area() << endl;
    cout << "Perimeter: " << rectangle.Perimeter() << endl;

    cout << "" << endl;

    Polygon polygon("MyPolygon", "Regular", 6);
    cout << "Polygon Name: " << polygon.getName() << endl;
    cout << "Type: " << polygon.getType() << endl;
    cout << "Number of sides (n): " << polygon.getN() << endl;
    cout << "Sum of all angles: " << polygon.sumOfAllAngles() << endl;
    cout << "Each angle of the polygon: " << polygon.eachAngleOfPolygon() << endl;
    cout << "Number of diagonals: " << polygon.polygonDiagonals() << endl;
    cout << "Sum of all exterior angles: " << polygon.SumOfExteriorPolygons() << endl;

    cout << "" << endl;

    Pentagon pentagon("MyPentagon", "Regular", 2, 3, 4, 5, 6, 7);
    cout << "Pentagon Name: " << pentagon.getName() << endl;
    cout << "Type: " << pentagon.getType() << endl;
    cout << "Side A: " << pentagon.getA() << endl;
    cout << "Side B: " << pentagon.getB() << endl;
    cout << "Side C: " << pentagon.getC() << endl;
    cout << "Side D: " << pentagon.getD() << endl;
    cout << "Side E: " << pentagon.getE() << endl;
    cout << "Perimeter: " << pentagon.Perimeter() << endl;
    cout << "Area: " << pentagon.Area() << endl;

    cout << "" << endl;

    Hexagon hexagon("MyHexagon", "Regular", 4, 5);
    cout << "Hexagon Name: " << hexagon.getName() << endl;
    cout << "Type: " << hexagon.getType() << endl;
    cout << "Side Length: " << hexagon.getA() << endl;
    cout << "Perimeter: " << hexagon.Perimeter() << endl;
    cout << "Area: " << hexagon.Area() << endl;

    cout << "" << endl;

    Circle circle("MyCircle", "Regular", 3);
    cout << "Circle Name: " << circle.getName() << endl;
    cout << "Type: " << circle.getType() << endl;
    cout << "Radius: " << circle.getR() << endl;
    cout << "Area: " << circle.Area() << endl;
    cout << "Circumference: " << circle.Circumference() << endl;

    cout << "" << endl;

    objects::RightTriangle righttriangle("MyTriangle", "Right", 3, 4);
    cout << "Triangle Name: " << righttriangle.getName() << endl;
    cout << "Type: " << righttriangle.getType() << endl;
    cout << "Side X: " << righttriangle.getX() << endl;
    cout << "Side Y: " << righttriangle.getY() << endl;
    cout << "Side Z: " << righttriangle.getZ() << endl;
    cout << "Hypotenuse: " << righttriangle.getHypotenuse() << endl;
    cout << "Sine: " << righttriangle.sin() << endl;
    cout << "Cosine: " << righttriangle.cos() << endl;
    cout << "Tangent: " << righttriangle.tan() << endl;
    cout << "Cosecant: " << righttriangle.csc() << endl;
    cout << "Secant: " << righttriangle.sec() << endl;
    cout << "Cotangent: " << righttriangle.cot() << endl;

    return 0;
}
