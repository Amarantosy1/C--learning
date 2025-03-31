#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double daphne = 100;
    double cleo = 100;
    int i = 0;
    while (cleo <= daphne)
    {
        i ++;
        daphne += 10;
        cleo *= 1.05;
    }
    
    
    cout << i;
    cin.get();
    return 0;
}