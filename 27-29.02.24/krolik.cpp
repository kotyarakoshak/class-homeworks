#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <stdexcept>
using namespace std;

int main()
{
    set<int> sss;
    string s;
    getline (cin, s);
    stringstream ss(s);
    int x;
    for (;ss >> x;) {sss.insert(x);}
    set<int> ccc;
    string c;
    getline (cin, c);
    stringstream cc(c);
    int y;
    for (;cc >> y;) {ccc.insert(y);}

    for (set<int>::iterator it = sss.begin(); it != sss.end(); it++)
    {
        int p = *it;
        if (ccc.find(p) != ccc.end()) 
        {
            cout << p << " ";
        }
    }
}