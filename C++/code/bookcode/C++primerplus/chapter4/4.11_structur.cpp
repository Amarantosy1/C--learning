#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Cloria",
        1.88,
        29.99
    };

    inflatable pal = 
    {
        "Audancious Arthur",
        3.12,
        32.99

    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $" << guest.price + pal.price << ".\n\n";

    inflatable bouquet {"sunflowers", 0.20, 12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;


    cin.get();
    return 0;
}
