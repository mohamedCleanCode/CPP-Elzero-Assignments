#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numsSize)
{
    int num1 = 0;
    int num2 = 1;

    for (int i = 0; i < numsSize; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            num1 += numbers[i];
        }
        else
        {
            num2 *= numbers[i];
        }
    }
    return num1 + num2;
}

int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}