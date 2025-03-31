#include <iostream>

int main()
{
    using namespace std;
    int sum_result = 0;
    int i;
    for (cin >> i; i != 0; cin >> i)
    {
        sum_result += i;
        cout << sum_result << endl;
    }
    cin.get();cin.get();
    
    return 0;
}