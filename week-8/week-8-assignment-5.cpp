#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int num1, int num2)
{
    cout << pow(num1, num2) << "\n";

    int result = 1;
    for (int i = 0; i < num2; i++)
    {
        result *= num1;
    }
    cout << result << "\n";
    cout << 2 * 2 * 2 * 2 * 2;
}

int main()
{
    thepower(2, 5); // 32
    return 0;
}