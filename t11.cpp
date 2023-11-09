#include <iostream>
using namespace std;
void removeVowels(string input)
{
    int i = input.length();
    cout<<"String with vowels removed: ";
    for(int x=0; x<i; x++)
    {
        if(input[x]=='A' || input[x]=='a' || input[x]=='E' || input[x]=='e' || input[x]=='I' ||
        input[x]=='i' || input[x]=='O' || input[x]=='o' || input[x]=='U' || input[x]=='u' )
        {
            continue;
        }
        cout<<input[x];
    }
}
main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin,input);
    removeVowels(input);
}