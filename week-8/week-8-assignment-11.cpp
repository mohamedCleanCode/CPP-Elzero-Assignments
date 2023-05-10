#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[], int numsSize)
{
    int biggest = -100;

    for (int i = 0; i < numsSize; i++)
    {
        if (numbers[i] < 0 && numbers[i] > biggest)
        {
            biggest = numbers[i];
        }
    }

    return biggest;
}

int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}