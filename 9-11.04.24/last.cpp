#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <cmath>
using namespace std;
#define M_PI 3.14159265358979323846

class Shape
{
    protected:
    double x, y;
    public:
    Shape(double x, double y)
    {
        (*this).x = x;
        (*this).y = y;
    }

    virtual double area() const = 0;

    virtual ~Shape() {};
};

class Circle : public Shape
{
    protected:
    double r;
    public:
    Circle(double x, double y, double r) : Shape(x, y)
    {
        (*this).r = r;
    }

    virtual double area() const
    {
        return M_PI * r * r;
    }

    virtual ~Circle() {};
};

class Rectangle : public Shape
{
    protected:
    double a, b;
    public:
    Rectangle(double x, double y, double a, double b) : Shape(x,y) 
    {
        (*this).a = a;
        (*this).b = b;
    }

    virtual double area() const
    {
        return a * b;
    }

    virtual ~Rectangle() {};
};

vector<Shape*> V;

int main()
{
    Circle sir = Circle(8, 2, 9);
    V.push_back(&sir);
    Rectangle tongue = Rectangle(3, 6, 8, 7);
    V.push_back(&tongue);

    for(int i = 0; i < V.size(); ++i)
    {
        cout << V[i]->area() << endl;
    }

    return 0;
}