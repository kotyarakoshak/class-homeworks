#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

struct numb
{
    string s;
    
    bool operator<(const numb& a)
    {
        if (s.length() != a.s.length()) {return s.length() < a.s.length();}
        else {return s < a.s;}
    }
};

int main()
{
    int n;
    cin >> n;
    string s;
    set<numb> num;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        numb a;
        a.s = s;
        num.insert(a);
        set<numb>::iterator it = num.find(a);
        if (it == num.begin()) {cout << "-1 ";}
        else {cout << (*(it--)).s << " ";} 
        if (it == num.end()) {cout << "-1" << endl;}
        else {cout << (*(it++)).s << endl;} 
    }
}