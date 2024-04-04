#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;
//     Main task - to implement the function fillCountries to put countries into a container]
// (vector<Country> or map<std::string, Country>).

//     Intermediate steps:
//     1. Define operator< for both Cities and Countries based on their names.
//     2. Read cities as pairs <City, name of the country>.
//     3. Use the name of the country to find if there is such country in the container.
//     4. Add a country to the container or a city to an existing country.

struct Coordinate
{
    double longitude;
    double latitude;
};

struct City
{
    string name;
    int pop;
    Coordinate coordinate;
    bool operator<(const City& a)const 
    {
        return ((*this).pop > a.pop);
    }
};

struct Country
{
    string name;
    set<City> cities;
    bool operator<(const Country& a) const 
    {
        return ((*this).name > a.name);
    }
};

ostream& operator<<(ostream& out, City C)
{
    out << C.name << " " << C.pop << " " << C.coordinate.longitude << " " << C.coordinate.latitude;
    return out;
}

void fillCountries(istream& inFile, vector<Country>& countries)
{
    map<string, int> ec;
    string fignya;
    getline(inFile, fignya);
    while(inFile.eof() == false)
    {
        string s;
        getline(inFile, s);
        stringstream ss(s);
        string city, country, abc;
        double lon, lat;
        int pop;
        getline(ss, city, ',');
        getline(ss, abc, ',');
        lon = stod(abc);
        getline(ss, abc, ',');
        lat = stod(abc);
        getline(ss, country, ',');
        getline(ss, abc, ',');
        pop = stod(abc);

        City C = {city, pop, {lon, lat}};

        if (ec.find(country) != ec.end())
        {
            int a = ec[country];
            countries[a].cities.insert(C);
        }
        else
        {
            set <City> city;
            Country coun = {country, city};
            coun.cities.insert(C);
            countries.push_back(coun);
            ec[country] = countries.size() - 1;
        }

    }
}

int main()
{
    const string FILENAME = "cities.csv"; //"../../data/problem1_cities/cities.csv";
    ifstream inputFile;
    inputFile.open(FILENAME);
    if(inputFile)
    {
        cout<<"OK\n";
    }

    vector<Country> countries;
    fillCountries(inputFile, countries);
    sort(countries.begin(), countries.end());
    for (int i = 0; i < countries.size(); i++)
    {
        cout << countries[i].name;
        //for (set<City>::iterator it = countries[i].cities.begin(); it != countries[i].cities.end(); it++)
        for (City city : countries[i].cities)
        {
            //cout << countries[i].cities << endl;
            cout << city << endl;
        }
    }
    return 0;
}
