#include <iostream>
#include <cstring>

struct car
{
    char make[20];
    int year;
};

int main()
{
    using namespace std;
    int count = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> count;
    cin.ignore(); // Ignore the newline character left in the input buffer

    car* cars = new car[count]; // Allocate memory for an array of car structures

    for (int i = 0; i < count; i++)
    {
        cout << "Car #" << i + 1 << ": " << endl;
        cout << "Please enter the make: ";
        cin.getline(cars[i].make, 20); // Use getline to read the make
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.ignore(); // Ignore the newline character left in the input buffer
    }
    
    cout << "Here is your collection: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << cars[i].year << " " << cars[i].make << endl;
    }
    
    delete[] cars; // Free the allocated memory
    cin.get();cin.get();
    return 0;
}