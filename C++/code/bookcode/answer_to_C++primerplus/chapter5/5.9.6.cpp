#include <iostream>
const int Years = 3;
const int Months = 12;

int main()
{
    using namespace std;
    const string months[Months]
    {
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10",
        "11",
        "12",
    };
    int quility[Years][Months];
    int count[3]
        {
            0,
            0,
            0
        };

    for (int years = 0; years < Years; years++)
    {
        cout << "Enter the number " << years + 1 <<"'s income" << endl;
        for (int month = 0; month < Months; month++)
        {
            cout << months[month] << endl;
            cin >> quility[years][month];

        }
        
    }
    
    for (int years = 0; years < Years; years++)
    {
        for (int month = 0; month < Months; month++)
        {
            count[years] += quility[years][month];
        }
        
    }
    cout << count[0] << endl << count[1] << endl << count[2];
    cin.get();cin.get();
    return 0;
}