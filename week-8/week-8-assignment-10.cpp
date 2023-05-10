#include <iostream>
#include <limits.h>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numsSize)
{

    int smallest = 50;
    for (int i = 0; i < numsSize; i++)
    {
        if (
            numbers[i] > 0 && numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    return smallest;
}

int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
}