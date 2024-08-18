#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number to print pattern: ";
    cin >> input;
    int row = 1;
    while (row <= input)
    {
        int space = input - row;
        // printing spaces
        while (space)
        {
            cout << " ";
            space--;
        }

        // printing starts
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}