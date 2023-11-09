#include <iostream>
using namespace std;

void checkChord(string input[], int chords)
{
    cout << "Jazzified chords: [";
    int z = chords - 1;
    for (int x=0; x<chords; x++)
    {
        if(input[x].back() == '7')
        {
            if (x == z)
            {
                cout << input[x];
                break;
            }
            cout << input[x] << ", ";
        }
        else
        {
                if (x == z)
            {
                cout << input[x] << "7";
                break;
            }
            cout << input[x] << "7, ";
        }
        
    }
    cout << "]";
}

main()
{
    int chords;
    cout << "Enter the number of chords:  ";
    cin >> chords;
    cout << "Enter " << chords << " chords, one per line: " << endl;
    string input[chords];
    for (int y = 0; y < chords; y++)
    {
        cin >> input[y];
    }

    checkChord(input, chords);
}