#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <cmath>
using namespace std;

class animal
{
    protected:
    string name;
    int weight;
    public:
    animal(string name, int weight) : name(name), weight(weight) {}
    virtual ~animal() {};
    virtual void print() {};
};

class cat : public animal
{
    protected:
    string breed;
    public:
    cat(string name, int weight, string breed) : animal(name, weight), breed(breed) {};
    virtual ~cat() {};
    virtual void print()
    {
        cout << name << " " << weight << " " << breed << '\n';
    } 
};

class dog : public animal
{
    protected:
    string breed;
    public:
    dog(string name, int weight, string breed) : animal(name, weight), breed(breed) {};
    virtual ~dog() {};
    virtual void print()
    {
        cout << name << " " << weight << " " << breed << '\n';
    }
};

int main()
{
    vector<animal*> V;
    cat kotya = cat("Grey", 7, "stray");
    dog taksa = dog("idk", 6, "taksa");
    V.push_back(&kotya);
    V.push_back(&taksa);
    for(int i = 0; i < V.size(); ++i)
    {
        V[i]->print();
    }

   return 0;
}