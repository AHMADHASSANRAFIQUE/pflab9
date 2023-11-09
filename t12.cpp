#include <iostream>
using namespace std;
bool check(int input,int input1[])
{
    for(int x=0; x<input; x++)
    {
        if(x % 2 == 0)
        {
            if(input1[x] % 2 != 0)
            {
                return false;
            }
        }
        else if(x % 2 != 0)
        {
            if(input1[x] % 2 == 0)
            {
                return false;
            }
        }
    }
    return true;
}
main()
{
    int input;
    cout << "Enter the size of the array: ";
    cin>>input;
    cout<<"Enter "<<input<<" elements of the array: "<<endl;
    int input1[input];
    for(int z=0; z<input; z++)
    {
        cin>>input1[z];
    }
    if(check(input,input1))
    {
        cout<<"The array is special";
    }
    else
    {
        cout<<"The array is not special";
    }
}