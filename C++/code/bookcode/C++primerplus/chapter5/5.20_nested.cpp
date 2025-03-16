#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char * cities[Cities] {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribbe Vista"
    };

    int maxtemps[Years][Cities]
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 109, 108},
        {98, 103, 95, 109, 107}
    };

    cout << "Maximum tempertures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; city++)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; year++)
        {
            cout << maxtemps[year][city] << "\t";
            
        }
        cout << endl;
    }
    cin.get(); 
    return 0;
}