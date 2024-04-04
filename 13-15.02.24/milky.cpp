#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
{
    ifstream MYin("input.csv");
    vector <double> average;
    int cnt = 0;
    for (; !MYin.eof();)
    {
        vector <int> V;
        string s;
        getline(MYin, s);
        if (s.length() == 0) {break;} {cnt ++;}
        s.push_back(',');
        int ch = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ',') {ch = ch*10 + (s[i] - '0');}
            else {V.push_back(ch); ch = 0;}
        }
        if (average.size() == 0) {average.resize (V.size(), 0);}
        for (int i = 0; i < V.size(); i++) {average[i] += V[i];}
    }
    for (int i = 0; i < average.size(); i++)
    {
        average[i] /= (double) cnt;
        cout << average[i] << ' ';
    }
}