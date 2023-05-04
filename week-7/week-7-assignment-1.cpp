#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 11; i++)
    {
        cout << i << "\n";
    }

    cout << "=====================\n";

    int i = 0;

    while (i < 11)
    {
        cout << i << "\n";
        i++;
    }

    cout << "=====================\n";

    int index = 0;

    do
    {
        cout << index << "\n";
        index++;

    } while (index < 11);
    return 0;
}