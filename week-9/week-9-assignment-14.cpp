#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};

    // Method One
    // sort(nums.begin(), nums.end());

    // Method Two
    // stable_sort(nums.begin(), nums.end());

    // Method Three -> Use Swap + Loop For Challenge
    swap(nums[0], nums[4]);
    swap(nums[1], nums[3]);

    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5