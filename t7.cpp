#include <iostream>
using namespace std;

double resistance(int input,float number[])
{
    double maxima=0;
    for (int i = 0; i < input; i++)
    {
        maxima=maxima+number[i];
    }
    return maxima;
}
main()
{
    int input;
    cout << "Enter the number of resistors in the series circuit: ";
    cin>>input;
    float number[input];
    cout<<"Enter the resistance values (in ohms) of the "<<input<<" resistors, one per line:"<<endl;
    for(int x = 0; x<input; x++)
    {
        cin>>number[x];
    }
    double resistors=resistance(input,number);
    cout<<"The total resistance of the series circuit is "<<resistors;
    cout<<" ohms.";
}