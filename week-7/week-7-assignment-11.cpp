#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int friendsCount = size(friends);

    for (int i = 0; i < friendsCount; i++)
    {
        cout << "=========\n";
        cout << "= " << friends[i] << " =\n";
        cout << "==================\n";
        cout << "== ";
        for (int j = 0; j < size(friends[i]); j++)
        {
            cout << friends[i][j];
            if (j != size(friends[i]) - 1)
            {
                cout << ", ";
            }
        }
        cout << " =\n";
        cout << "==================\n";
    }

    // Output Needed

    // =========
    // = Ahmed =
    // ==================
    // == A, h, m, e, d =
    // ==================

    // =========
    // = Osama =
    // ==================
    // == O, s, a, m, a =
    // ==================

    // =========
    // = Ameer =
    // ==================
    // == A, m, e, e, r =
    // ==================
    return 0;
}