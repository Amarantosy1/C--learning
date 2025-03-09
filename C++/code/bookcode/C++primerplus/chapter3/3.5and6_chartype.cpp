#include <iostream>
int main()
{
    using namespace std;
    char ch;
    
    cout << "Enter a character: "<< endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character "<< endl;

    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    ch += 1;
    i = ch;
    
    cout << "Add one to the character code:\nThe ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    cin.get();cin.get();
    return 0;

}