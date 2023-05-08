#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int numbers[], int numsSize, int noNeed)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (numbers[i] == noNeed)
            continue;
        result += numbers[i];
    }

    return result;
}

int main()
{
    int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}