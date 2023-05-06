#include <iostream>
using namespace std;

int main()
{
    for (int i = 30; i >= 3; i -= 3)
    {
        cout << i << "\n";
    }

    cout << "==============\n";

    for (int i = 30; i >= 3; i -= 3)
    {
        if (i % 2 != 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}