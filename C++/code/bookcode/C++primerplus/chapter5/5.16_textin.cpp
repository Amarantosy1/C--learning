#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter charavers; enter # to quit:\n";
    cin >> ch;  //cin.get(ch)可以读取空格
    while (ch != '#')
    {
        cout << ch;
        ++ count;
        cin >> ch;  //cin.get(ch)

    }
    cout << endl << count << " characters read\n";

    cin.get();cin.get();
    return 0;
}