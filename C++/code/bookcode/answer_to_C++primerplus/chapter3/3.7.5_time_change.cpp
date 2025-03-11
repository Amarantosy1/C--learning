#include <iostream>
int main()
{
    using namespace std;

    const int Second_to_Day = 86400;
    const int Second_to_Hour = 3600;
    const int Second_to_Minute = 60;

    long int seconds;
    int days, hours, minutes, last_seconds;
    cin >> seconds;


    days = seconds / Second_to_Day;
    hours = (seconds % Second_to_Day) / Second_to_Hour; 
    minutes = (seconds % Second_to_Hour) / Second_to_Minute;
    last_seconds = seconds % Second_to_Minute;

    cout << seconds <<" seconds = " << days << " days, " << hours <<
     " hours, " << minutes << " minutes, " << last_seconds << " seconds.";
    
    cin.get();cin.get();
    return 0;



}