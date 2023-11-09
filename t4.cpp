#include <iostream>
using namespace std;

void rorder(int input,int number[])
{
    cout<<"Numbers in reverse order: ";
    for(int x = input-1; x>=0; x--)
    {
        cout<<number[x]<<" ";
    }
    cout<<endl;
}
main()
{
    int input;
    cout << "Enter the number of elements: ";
    cin>>input;
    if(input<=0)
    {
        cout<<"Invalid input, Number of elements must be greater than 0."<<endl;
        return 0;
    }
    int number[input];
    cout<<"Enter "<<input<<" numbers, one per line:"<<endl;
    for(int x=0; x<input; x++)
    {
        cin>>number[x];
    }
    rorder(input,number);
}