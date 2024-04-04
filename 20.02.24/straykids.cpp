#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

void rev (int n, int m, int a[100][100])
{
    for (int j = 0; j < m; j++){
        for (int i = 0; i < (n / 2); i++){
            int neww = a[n - i - 1][j];
            a[n - i - 1][j] = a[i][j];
            a[i][j] = neww;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int a0;
            cin >> a0;
            a[i][j] = a0;
        }
    }
    rev(n, m, a);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}