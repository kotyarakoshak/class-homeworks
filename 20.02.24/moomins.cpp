#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

void rev (int n, int a[100][100], int b[100][100])
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[j][n - 1 - i] = a[i][j];
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int b[100][100];
    int a[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int a0;
            cin >> a0;
            a[i][j] = a0;
        }
    }
    rev(n, a, b);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}