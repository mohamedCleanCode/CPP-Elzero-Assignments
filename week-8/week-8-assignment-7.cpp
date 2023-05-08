#include <iostream>
using namespace std;

// Write Your Function Here
int beforeresult(int num1, int num2)
{
    int result = 0;
    for (int i = 0; i <= num2; i++)
    {
        result += num1;
        num1--;
    }
    return result;
}

int main()
{
    cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
    // Main Number [10]
    // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
    cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
    // Main Number [1015
    // Numbers Before [14 + 13 + 12] <- 3 Numbers
    return 0;
}