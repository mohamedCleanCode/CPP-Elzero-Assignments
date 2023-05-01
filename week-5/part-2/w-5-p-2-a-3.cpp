#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "type a number?\n";
    cin >> num;

    switch (num)
    {
    case 10:
        cout << "Case 1\n";
        break;
    case 20:
        cout << "Case 2\n";
        break;
    case 30:
    case 31:
    case 32:
        cout << "Case 3\n";
        break;
    default:
        cout << "Invalid Number\n";
    }

    return 0;
}