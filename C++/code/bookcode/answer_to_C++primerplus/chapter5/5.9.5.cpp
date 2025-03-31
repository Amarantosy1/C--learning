#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    string months[12]
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
    int quility[12];
    int count = 0;

    int months_num = 12;
    for (int i = 0; i < months_num; i++)
    {
        cout << months[i] << endl;
        cin >> quility[i];
        count += quility[i];
        
    }
    
    cout << count;
    cin.get();cin.get();

    return 0;
}