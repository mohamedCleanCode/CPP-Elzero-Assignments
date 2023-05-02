#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Example 1
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    if (nums[0] > check)
    {
        cout << "{" << nums[0] << "}";
        cout << " + "
             << "{" << nums[3] << "}";
        cout << " = " << nums[0] + nums[3] << endl;
    }
    if (nums[1] > check)
    {
        cout << "{" << nums[1] << "}"
             << " + "
             << "{" << nums[3] << "}"
             << " = " << nums[1] + nums[3] << endl;
    }
    if (nums[2] > check)
    {
        cout << "{" << nums[2] << "}"
             << " + "
             << "{" << nums[3] << "}"
             << " = " << nums[2] + nums[3] << endl;
    }
    return 0;
}