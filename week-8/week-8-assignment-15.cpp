#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money[], int monSize)
{
    float total = 0;
    for (int i = 0; i < monSize; i++)
    {
        total += money[i];
    }

    return total / monSize;
}

int main()
{
    int money[] = {10, 20, 15, 25, 30, 35};
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}