#include <iostream>
using namespace std;

int main()
{
    int index = 10;
    int jump = 2;

    for (;;)
    {
        // Write Your Code Here
        cout << index << "\n";
        index -= jump;
        if (index == jump)
        {
            break;
        }
    }

    // Output Needed
    // 10
    // 8
    // 6
    // 4
    return 0;
}