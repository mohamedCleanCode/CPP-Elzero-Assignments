#include <array>
#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums) / sizeof(nums[0]) << endl;

    // Method 2
    cout << size(nums) << endl;

    // Method 3
    cout << end(nums) - begin(nums) << endl; // 6 - 0

    return 0;
}