#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int friendsCount = size(friends);

    // Output Needed

    // "Ahmed"
    // "Ashraf"
    // "Amany"

    for (int i = 0; i < friendsCount; i++)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << "\n";
        }
    }

    cout << "=================\n";

    int i = 0;
    while (i < friendsCount)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << "\n";
        }
        i++;
    }

    return 0;
}