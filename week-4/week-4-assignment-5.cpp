#include <iostream>
using namespace std;

int main()
{
    // Assign The Values
    char a = '1';
    char b = '1';
    char c = '999';

    a = int(a);
    b = int(b);
    c = int(c);

    // Do Not Edit
    cout << b * c + a << "\n"; // 1000
    return 0;
}
