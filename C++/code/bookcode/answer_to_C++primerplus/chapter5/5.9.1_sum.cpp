#include <iostream>

int main()
{
    using namespace std;
    int m;
    int n;
    int sum_result = 0; 
    cin >> m;
    cin >> n;
    for (int i = m; i <= n; i++) 
    {
        sum_result += i;
    }
    cout << sum_result;
    cin.get();cin.get();
    return 0;
}