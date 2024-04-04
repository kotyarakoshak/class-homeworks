#include <iostream>
#include <cstdio>
#include <climits>
#include "foo.h"
#include "foo.cpp"

using namespace std;

int main()
{
	cout << "Hello world!" << endl;

	int y = foo();
	cout << y << endl;
	
	int a = 7;
	bool b = true;
	double c = 2345.4567;
	long long d = 123456789;
	
	int aa = sizeof(a);
	int bb = sizeof(b);
	int cc = sizeof(c);
	int dd = sizeof(d);
	
	cout << aa;
	cout << bb;
	cout << cc;
	cout << dd << endl;
	cout << d << endl;
	
	int n;
	cin >> n;
	
	if (n < 1 || n > 10)
	{
		cout << "wrong argument" << endl;
		return 0;
	}
	
	
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << "  "; 
			else if (i == 0) cout << j << " ";
			else if (j == 0) cout << i << " ";
			else cout << i*j << ' ';
		}
		cout << endl;
	}
	return 0;
}