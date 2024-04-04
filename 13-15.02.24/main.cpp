#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
using namespace std;

int sumIntegersInFile(const string& inputFilePath, const string& outputFilePath) 
{
    ifstream MYin(inputFilePath);
    ofstream MYout(outputFilePath);
    int sum = 0;
    int a;
    while (!MYin.eof())
    {
        if (MYin >> a)
        {
            sum += a;
        } 
    }

    MYout << sum;
    MYout.close();
    MYin.close();
}

int main() 
{
    sumIntegersInFile("input.txt", "output.txt"); 
    
    return 0;
}