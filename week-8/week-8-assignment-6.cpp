#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string word)
{
    int wordCount = size(word);
    string result = "";

    for (int i = 0; i < wordCount; i++)
    {
        if (islower(word[i]) && word[i] != 'h')
        {
            result += toupper(word[i]);
        }
        else if (isupper(word[i]) && word[i] != 'H')
        {
            result += tolower(word[i]);
        }
        else
        {
            result += word[i];
        }
    }

    return result;
}

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}