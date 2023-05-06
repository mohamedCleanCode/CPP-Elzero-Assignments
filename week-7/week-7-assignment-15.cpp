#include <iostream>
using namespace std;

int main()
{
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int numsCount = size(nums); // 5

    for (int i = help_num - help_num; i < numsCount; i++)
    {
        cout << nums[i] << " + " << nums[help_num] << " = "
             << nums[i] + nums[help_num] << "\n";
        help_num--;
        // 0 4
        // 1 3
        // 2 2
        // 3 1
        // 4 0
    }

    // Output Needed

    // "2 + 10 = 12"
    // "4 + 6 = 10"
    // "5 + 5 = 10"
    // "6 + 4 = 10"
    // "10 + 2 = 12"

    return 0;
}