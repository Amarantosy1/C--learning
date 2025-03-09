#include <iostream>
double c_to_f_temperature(double);
int main ()
{
    using namespace std;
    double cels;
    
    cout << "Please enter a Celsius value: ";
    cin >> cels;
    double fah = c_to_f_temperature(cels); //要在cel传进来之后再进行运算
    cout << cels << " degrees Celsius is " << fah << " degrees Fahrenheit.";

    cin.get();cin.get();
    return 0;
}

double c_to_f_temperature(double cels)
{
    return (cels*1.8 + 32.0);
}