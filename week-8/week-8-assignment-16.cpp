#include <iostream>
using namespace std;

// Write Your Function Here
int books(int small, int medium, int large, int availableShelves)
{
    int smallShelves = 2 * small;              // 2 * 10 = 20
    int mediumShelves = 4 * medium;            // 4 * 4 = 16
    int largeShelves = 6 * large;              // 6 * 3 = 18
    int shelvesSpaces = availableShelves * 20; // 4 * 20 = 80

    int totalBooksSpaces = smallShelves + mediumShelves + largeShelves;

    if (totalBooksSpaces < shelvesSpaces)
    {
        return shelvesSpaces - totalBooksSpaces;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}