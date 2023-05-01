#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "type an year?\n";
    cin >> year;

    switch (year)
    {
    case 1982:
        cout << "My Birth Day\n";
        break;
    case 1989:
        cout << "My First Work\n";
        break;
    case 1995:
        cout << "Windows 95\n";
        break;
    case 2000:
        cout << "Windows Millennium\n";
        break;
    case 2002:
        cout << "Created My vBulletin Forum\n";
        break;
    default:
        cout << "No Events in This Year\n";
    }

    return 0;
}