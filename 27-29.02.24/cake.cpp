#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stdexcept>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    map<string,int> m;
    string a;
    while (cin >> a)
    {
        cout << m[a] << " ";
        m[a]++;
    }


    /*for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        pair<string, int> x;
        x = *it;
        string s = x.first;
        int y = x.second;
        if (m.find(s) != m.end())
    }*/
}