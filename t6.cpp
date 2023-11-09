#include <iostream>
using namespace std;

int max(int input,int number[])
{
    int maxima = number[0];
    for (int i = 1; i <= input-1; i++)
    {
        if(number[i] > maxima)
        {
            maxima=number[i];
        }
    }
    return maxima;
}
main()
{
    int input;
    cout << "Enter the number of elements: ";
    cin>>input;
    int number[input];
    cout<<"Enter "<<input<<" numbers, one per line:"<<endl;
    for(int x = 0; x<input; x++)
    {
        cin>>number[x];
    }
    cout<<"The largest number entered is: "<<max(input,number);
}