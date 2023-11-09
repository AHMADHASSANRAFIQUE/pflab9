#include <iostream>
using namespace std;

void nextletter(string input)
{
    int x = 0;
    cout<<"Shifted String: ";
    while(input[x] != '\0')
    {
        if(input[x] == 32)
        {
            cout<<char(32);
        }
        else if(input[x] == 90)
        {
            cout<<char(65);
        }
        else if(input[x] == 122)
        {
            cout<<char(97);
        }
        else if((input[x] >= 97 && input[x] < 122) || (input[x] >= 65 && input[x] < 90))
        {
            cout<<char(input[x]+1);
        }
        x++;
    }
}
main()
{
    string input;
    cout << "Enter a String: ";
    getline(cin,input);
    nextletter(input);
}