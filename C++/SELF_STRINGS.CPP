#include <iostream>
#include <string>
using namespace std;

int main()
{
    // input of two strings using getline in order to get space as well as all the ASCII values
    // two strings str1 and str2,,a and b
    string a;
    cout << "Enter the first string: ";
    getline(cin, a);
    string str1 = a;

    string b;
    cout << "Enter the second string: ";
    getline(cin, b);
    string str2 = b;

    // comparing strings
    if (str1.compare(str2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    // concatenating strings and printing them separately
    cout << "Concatenation of strings: " << str1 + str2 << endl;

    // lengths of the strings
    cout << "Length of the first string: " << str1.length() << endl;
    cout << "Length of the second string: " << str2.length() << endl;

    // converting the first string to lowercase
    for (char &c : str1)
    {
        c = tolower(c);
    }
    cout << "String 1 in lowercase: " << str1 << endl;
    for (char &d : str2)
    {
        d = tolower(d);
    }
    cout << "String 2 in lowercase: " << str2 << endl;

    return 0;
}
