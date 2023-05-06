#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int namesCount = size(names);
    for (int i = 0; i < namesCount; i++)
    {
        if (size(names[i]) == 5)
        {
            cout << names[i] << "\n";
        }
    }

    // Output Needed

    // "Osama"
    // "Ahmed"
    // "Hagar"
    // "Salwa"
    return 0;
}