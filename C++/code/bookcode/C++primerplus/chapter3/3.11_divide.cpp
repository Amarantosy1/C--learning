#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Interger division: 9/5 = " << 9/5 << endl;
    cout << "Flouting-point division: 9.0/5.0 = " << 9.0/5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0/5 << endl;
    cout << "dounle consants: 1e7/9.0 = " << 1e7/9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1e7f/9.0f << endl;

    cin.get();
    return 0;
}