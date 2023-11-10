#include <iostream>
using namespace std;

void checknumber(int input,int elements[],int input1);

int main()
{
    int input;
    cout << "Enter the number of elements: ";
    cin >> input;
    cout << "Enter " <<input<< " numbers, one per line:"<<endl; 
    if (input <= 0)
    {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 1;
    }
    int elements[input],input1 = 0;
    checknumber(input,elements,input1);
}
void checknumber(int input,int elements[],int input1)
{
    for (int x = 0; x < input; x++)
    {
        int numbers;
        bool check = false;
        cin >> numbers;
        for (int y = 0; y < input1; y++)
        {
            if (elements[y] == numbers)
            {
                cout << "Already Entered: " << numbers << endl;
                check = true;
                break;
            }
        }
        if (!check)
        {
            elements[input1] = numbers;
            input1++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int z = 0; z < input1; z++)
    {
        cout << elements[z] << " ";
    }
    cout << endl;
}