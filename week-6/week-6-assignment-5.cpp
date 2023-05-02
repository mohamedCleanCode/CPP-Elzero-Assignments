#include <iostream>
#include <array>
using namespace std;

int main()
{
    int vals[] = {100, 300, 600, 200, 100};

    if (vals[0] == vals[sizeof(vals) / sizeof(vals[0]) - 1] && vals[1] == vals[sizeof(vals) / sizeof(vals[0]) - 2])
    {
        cout << "Array Is Palindrome\n";
    }
    else
    {
        cout << "Array Is Not  Palindrome\n";
    }
    return 0;
}