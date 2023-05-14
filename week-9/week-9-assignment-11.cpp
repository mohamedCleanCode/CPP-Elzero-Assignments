#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    vector<float> floats(100);

    // Fill Integers Here
    numbers.resize(100, 1000);

    // Fill Floats Here
    fill(floats.begin(), floats.end(), 100.50);

    cout << numbers.at(0) << "\n";  // 1000
    cout << numbers.at(99) << "\n"; // 1000

    cout << floats.at(0) << "\n";  // 100.50
    cout << floats.at(99) << "\n"; // 100.50
    return 0;
}