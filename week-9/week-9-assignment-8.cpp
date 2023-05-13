#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};
    vector<int>::iterator iter = numbers.begin();

    // Write Line Here
    advance(iter, 2);
    cout << *iter << "\n"; // 30

    // Write Line Here
    advance(iter, 2);
    cout << *iter << "\n"; // 50

    // Write Line Here
    advance(iter, -3);
    cout << *iter << "\n"; // 20

    return 0;
}