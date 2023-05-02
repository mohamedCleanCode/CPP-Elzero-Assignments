#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Example 1
    int vals[]{100, 200, 600, 400, 200};

    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number\n";
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n";
        cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
    }
    else if (vals[1] + vals[3] > vals[2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << "\n";
        cout << vals[1] + vals[3] << " > " << vals[2] << "\n";
    }
    else
    {
        cout << "Middle Number Is The Largest\n";
        cout << vals[2];
    }

    return 0;
}