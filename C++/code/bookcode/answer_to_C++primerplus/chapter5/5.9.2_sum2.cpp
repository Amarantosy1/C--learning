#include <iostream>
#include <array>
int main()
{
    using namespace std;
    long double first_element = 1;
    array<long double, 101> factor;
    factor[0] = factor [1] = first_element ; 
    for (int i = 2; i < 101; i++) // 注意这里要从2开始
    {
        factor[i] = factor[i-1] * i;
    }
    for (int i = 0; i < 101; i++)
    {
        cout << i << "! = " << factor[i] << endl ;
    }
    cin.get();
    

    return 0;
}