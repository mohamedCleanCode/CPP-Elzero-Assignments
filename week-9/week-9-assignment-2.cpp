#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40};
    cout << "First Element Is: "
         << "\n";
    cout << numbers[0] << "\n";
    cout << numbers.at(0) << "\n";
    cout << numbers.front() << "\n";
    cout << *numbers.begin() << "\n";

    cout << "==\n";

    cout << "Last Element Is: "
         << "\n";
    cout << numbers[3] << "\n";
    cout << numbers.at(3) << "\n";
    cout << numbers.back() << "\n";
    cout << *(numbers.end() - 1) << "\n";
    return 0;
}