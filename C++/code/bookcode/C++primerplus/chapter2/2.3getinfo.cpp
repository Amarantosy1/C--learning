#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "Hou many carrots do youhave?" << endl;
    cin >> carrots;
    cout << "Here are two more";
    carrots += 2;

    cout << "Now you have " << carrots << " carrots." << endl;

    cin.get();
    cin.get();
    return 0;
}