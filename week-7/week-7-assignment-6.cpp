#include <iostream>
using namespace std;

int main()
{
    int result = 10;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << result << "\n";

    //     result *= result;
    // }

    cout << "=================\n";

    int i = 0;
    while (i < 4)
    {
        cout << result << "\n";
        result *= result;
        i++;
    }

    return 0;
}