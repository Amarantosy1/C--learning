#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    //part1
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2 << endl;
    cout << "The third letter in " << charr2 << " is "
        << charr2[2] << endl;
    
    cout << "The third letter in " << str2 << " is "
        << str2[2] << endl;
    
    cout << endl;

    //part2
    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can assign one string object to another s2 = s1\n";

    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";

    s2 = "buzzard";

    cout << "s2: " << s2 <<endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";

    s3 = s1 + s2;
    cout << "s3: " << s3 <<endl;

    cout << "You can append strings.\n";
    
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;
    cout << endl;

    //part3
    str1 = str2;
    strcpy(charr1, charr2);
    str1 += " paste";
    strcat(charr1, " juice");
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    


    cin.get();cin.get();
    return 0;
}