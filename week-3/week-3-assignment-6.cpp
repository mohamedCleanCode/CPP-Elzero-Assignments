#include <iostream>
using namespace std;

// Assignment-6

int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    cout << "ASCII Value of " << a << " Is " << char(a) << endl;
    cout << "ASCII Value of " << b << " Is " << char(b) << endl;
    cout << "ASCII Value of " << c << " Is " << char(c) << endl;
    cout << "ASCII Value of " << d << " Is " << char(d) << endl;
    cout << "ASCII Value of " << e << " Is " << char(e) << endl;
    cout << "ASCII Value of " << f << " Is " << char(f) << endl;
    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);
    return 0;
}

/*
Output Needed

"Character Of This ASCII Value 69 Is E"
"Character Of This ASCII Value 108 Is l"
"Character Of This ASCII Value 122 Is z"
"Character Of This ASCII Value 101 Is e"
"Character Of This ASCII Value 114 Is r"
"Character Of This ASCII Value 111 Is o"

Output Needed In Last Line

"Elzero"
*/