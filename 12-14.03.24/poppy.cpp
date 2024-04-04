#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

class point
{
    private:
    double x, y;
    public:
    point(double x = 0, double y = 0)
    {
        (*this).x = x;
        (*this).y = y;
    }
    double getx()
    {
        return(*this).x;
    }
    void setx(double x)
    {
        (*this).x = x;
        return;
    }
    double gety()
    {
        return(*this).y;
    }
    void sety(double x)
    {
        (*this).y = x;
        return;
    }
    

    int dlina() const
    {
        return ((*this).x*(*this).x + (*this).y*(*this).y);
    }
};

bool operator<(const point& a, const point& b)
{
    return (a.dlina() < b.dlina());
}


int main()
{
    vector <point> v;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        point a = point(x, y);
        v.push_back(a);
    }

    stable_sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].getx() << " " << v[i].gety() << endl;
    }
}