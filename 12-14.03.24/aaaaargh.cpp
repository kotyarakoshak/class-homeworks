#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

class student
{
    private:
    string name, fname;
    int x1, x2, x3;
    public:
    student(string name = "", string fname = "", int x1 = 2, int x2 = 2, int x3 = 2)
    {
        (*this).name = name;
        (*this).fname = fname;
        (*this).x1 = x1;
        (*this).x2 = x2;
        (*this).x3 = x3;
    }
    string getName()
    {
        return(*this).name;
    }
    void setName(string n)
    {
        (*this).name = n;
        return;
    }
    string getfName()
    {
        return(*this).fname;
    }
    void setfName(string m)
    {
        (*this).fname = m;
        return;
    }

    int summa() const
    {
        return (*this).x1 + (*this).x2 + (*this).x3;
    }
};

bool operator<(const student& a, const student& b)
{
    return (a.summa() > b.summa());
}


int main()
{
    vector <student> v;
    int n;
    cin >> n;
    string name0, fname0;
    int x1, x2, x3;
    for (int i = 0; i < n; i++)
    {
        cin >> name0 >> fname0 >> x1 >> x2 >> x3;
        student a = student(name0, fname0, x1, x2, x3);
        v.push_back(a);
    }

    stable_sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].getName() << " " << v[i].getfName() << endl;
    }
}