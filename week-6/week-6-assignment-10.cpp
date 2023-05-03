#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    // "First: 10"
    // "Last: 50"

    cout << "First: " << nums[0] << endl;
    cout << "Last: " << nums[nums.size() - 1] << endl;

    // Method 2
    // "First: 10"
    // "Last: 50"
    cout << "First: " << nums.at(0) << endl;
    cout << "Last: " << nums[nums.end() - nums.begin() - 1] << endl;

    // Method 3
    // "First: 10"
    // "Last: 50"
    cout << "First: " << nums.front() << endl;
    cout << "Last: " << nums.back() << endl;

    return 0;
}