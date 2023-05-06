#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    while (num < 520)
    {
        // Your Code Here
        if (num == 2)
        {
            num--;
        }
        cout << num << "\n";

        num = num * 2 + 2;
    }

    // Needed Output

    // 1
    // 4
    // 10
    // 22
    // 46
    // 94
    // 190
    // 382

    return 0;
}