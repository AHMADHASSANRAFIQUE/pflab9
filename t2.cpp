#include <iostream>
using namespace std;

void displayStringInReverse(string input)
{
    int x = input.length();
    cout<<"Reversed String: ";
    for (int i = x - 1; i >= 0; i--)
    {
        cout << input[i];
    }
}
main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin,input);
    displayStringInReverse(input);
}