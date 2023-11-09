#include <iostream>
using namespace std;

void max(int firstinput,int number1[],int secondinput,int number2[])
{
    cout<<"Resulting array: [" <<number1[0]<<", ";
    for(int z=0; z<secondinput; z++)
    {
        cout<<number2[z]<<", ";
    }
    cout<<number1[1]<<"]";
}
main()
{
    int firstinput;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin>>firstinput;
    int number1[firstinput];
    cout<<"Enter "<<firstinput<<" elements for the first array, one per line:"<<endl;
    for(int x = 0; x<firstinput; x++)
    {
        cin>>number1[x];
    }
    int secondinput;
    cout << "Enter the number of elements for the second array: ";
    cin>>secondinput;
    int number2[secondinput];
    cout<<"Enter "<<secondinput<<" elements for the second array, one per line:"<<endl;
    for(int y=0; y<secondinput; y++)
    {
        cin>>number2[y];
    }
    max(firstinput,number1,secondinput,number2);
}