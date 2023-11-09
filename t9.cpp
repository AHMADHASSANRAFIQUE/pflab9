#include <iostream>
using namespace std;

bool checkPay(double change[],double amount)
{
    double total=0;
    for(int x=0; x<4; x++)
    {
        total=total+change[x];
    }
    if(total>amount)
    {
        return true;
    }
    else
    {
        return false;
    }
}
main()
{
    int quart,dim,nick,penn,amount;
    cout << "Enter quarters: ";
    cin>>quart;
    cout << "Enter dimes: ";
    cin>>dim;
    cout << "Enter nickels: ";
    cin>>nick;
    cout << "Enter pennies: ";
    cin>>penn;
    cout<<"Enter the total amount due: $";
    cin>>amount;
    double change[4];
    change[0]=quart*0.25;
    change[1]=dim*0.10;
    change[2]=nick*0.05;
    change[3]=penn*0.01;
    bool ans=checkPay(change,amount);
    string output;
    if(ans==true)
    {
        output="Yes";
    }
    else if(ans==false)
    {
        output="No";
    }
    cout<<"Can you pay the amount? "<<output;
}