#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int friendsCount = size(friends);

    // Output Needed

    // "Mohamed"
    // "Sayed"

    for (int i = 0; i < friendsCount; i++)
    {
        if (i < 1 || i > 2)
        {
            continue;
        }
        cout << friends[i] << "\n"; //
    }

    cout << "=================\n";

    int i = 0;
    while (i < friendsCount)
    {
        if (i >= 1 && i <= 2)
        {
            cout << friends[i] << "\n";
        }
        i++;
    }

    return 0;
}