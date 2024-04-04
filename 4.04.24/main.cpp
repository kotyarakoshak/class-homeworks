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

    Shape(double x, double y) : x(x), y(y) {}; //like (this*.x = x)

    virtual double area() const = 0;

    virtual ~Shape() {};
};

class Circle : public Shape
{
    protected:
    double r;
    public:

    Circle(double x, double y, double r) : Shape (x, y)
    {
        (*this).r = r;
    }
    virtual double area() const
    {
        return M_PI * r * r;
    }
};

class Rectangle : public Shape
{
    protected:
    double w, h;
    public:

    Rectangle(double x, double y, double w, double h) : Shape (x,y)
    {
        (*this).w = w;
        (*this).h = h;
    }

    virtual double area() const
    {
        return w * h;
    }

    virtual ~Rectangle() {};

};

vector<Shape*> V;
int main() 
{
    Circle a = Circle(3, 5, 7);
    V.push_back(&a);

    Rectangle b = Rectangle(0, 0, 5, 6);
    V.push_back(&b);

    for(int i = 0; i < V.size(); ++i)
    {
        //V[i]->area();
        cout << V[i]->area() << endl;
    }
    return 0;
}