#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 103; i++)
    {
        if (i <= 20 || i >= 100)
        {
            if (i < 10)
            {
                cout << "00" << i << "\n";
            }
            else if (i >= 10 && i < 100)
            {
                cout << "0" << i << "\n";
            }
            else
            {
                cout << i << "\n";
            }
        }
    }
    return 0;
}