#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "Unkwon")
{
    string message = "Hello ";

    if (gender == "Male")
    {
        message += "Mr " + name;
    }
    else if (gender == "Female")
    {
        message += "Miss " + name;
    }
    else
    {
        message += name;
    }

    return message;
}

int main()
{
    cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n";          // Hello Sameh
    return 0;
}