#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    cout << num + num << "\n";                 // 6 => 3 + 3
    cout << num * num - num << "\n";           // 6 => 3 * 3 - 3
    cout << (num * num) - num << "\n";         // 6 => (3 * 3) - 3
    cout << (num + num + num) - num << "\n";   // 6 => (3 + 3 + 3) - 3
    cout << (num - num) + (num + num) << "\n"; // 6 => (3 - 3) + (3 + 3)
    cout << (num + num) / (num / num) << "\n"; // 6 => (3 + 3) / (3 / 3)
    cout << (num / num) * (num + num) << "\n"; // 6 => (3 / 3) + (3 + 3)

    return 0;
}
