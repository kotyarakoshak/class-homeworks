#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

const int maxsize = 105;

struct mystack
{
    int* data;
    int size_m;
    int capacity;
    mystack()
    {
        capacity = maxsize;
        data = new int[capacity];
        size_m = 0;
    }
    ~mystack()
    {
        delete data;
    }
    void push (int x)
    {
        if (size_m == capacity)
        {
            int* olddata = data;
            data = new int[capacity*2];
            for (int i = 0; i < size_m; i++)
            {
                data[i] = olddata[i];
            }
            capacity *= 2;
            delete olddata;
        }
        data[size_m] = x;
        size_m++;
        return;
    }
    pair <bool, int> pop()
    {
        if (size_m == 0) {return {false, 1};}
        else
        {
            size_m--;
            return {true, data[size_m]};
        }
    }
    pair <bool, int> back()
    {
        if (size_m == 0) {return {false, 1};}
        else {return {true, data[size_m - 1]};}
    }
    int size()
    {
        return size_m;
    }
    void clear()
    {
        size_m = 0;
        return;
    }
};


int main()
{
    mystack ss = mystack();
    string s;
    while (true)
    {
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            ss.push(x);
            cout << "ok" << endl;
        }
        else if (s == "pop")
        {
            pair <bool, int> d = ss.pop();
            if (d.first == false) {cout << "error" << endl;}
            else {cout << d.second << endl;} 
        }
        else if (s == "back")
        {
            pair <bool, int> d = ss.back();
            if (d.first == false) {cout << "error" << endl;}
            else {cout << d.second << endl;}
        }
        else if (s == "size")
        {
            int c = ss.size();
            cout << c << endl;
        }
        else if (s == "clear")
        {
            ss.clear();
            cout << "ok" << endl;
        }
        else {
            cout << "bye";
            return false;
        }
    }
}