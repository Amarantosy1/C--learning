#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    double side;

    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That's the equivalent of a aquare " << side
        <<" feet to the side." << endl;
    cout << "How fascinating!" << endl;

    cin.get();cin.get();

    return 0;
}