#include <iostream>
using namespace std;

void countletter(string input)
{
    int x = 0;
    while(input[x] != '\0')
    {
        cout<<input[x]<<" found at position "<<x<<endl;
        x++;
    }
}
int main()
{
    string input;
    cout << "Enter a word: ";
    cin >> input;
    countletter(input);
}