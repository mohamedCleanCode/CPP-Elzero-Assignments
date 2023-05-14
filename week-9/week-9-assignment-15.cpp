#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    // Your Code Here
    rotate(nums.begin(), nums.begin() + 4, nums.end());

    for (int i : nums)
    {
        cout << i << "\n";
    }
    return 0;
}

// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4