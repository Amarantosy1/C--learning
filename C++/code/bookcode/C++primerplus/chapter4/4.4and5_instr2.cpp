#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name\n";
    cin.getline(name, ArSize); // cin.get(name, ArSize).get();

    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    cin.get();cin.get();
    return 0;

}