#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int result = ((a + b) * (a + b) + (a * a)) * a;

    cout << result << "\n";

    return 0;
}