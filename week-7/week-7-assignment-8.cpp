#include <iostream>
using namespace std;

int main()
{

    for (int i = 2; i < 130; i = i * 2 + 2)
    {
        cout << i << "\n"; //
    }

    cout << "=================\n";

    int i = 2;
    while (i < 130)
    {
        cout << i << "\n";
        i = i * 2 + 2;
    }

    return 0;
}