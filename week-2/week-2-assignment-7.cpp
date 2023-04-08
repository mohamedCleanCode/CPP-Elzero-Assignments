#include <iostream>
using namespace std;

// Assignment-7
int num = 50;

int read()
{
    int num = 100;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}