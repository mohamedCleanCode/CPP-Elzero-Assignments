#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for (int i = num1 + 1; i < num2; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}