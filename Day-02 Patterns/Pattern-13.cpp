#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number to print a pattern: ";
    cin >> input;
    int row = 1;
    while (row <= input)
    {
        int col = 1;
        char character = 'A';
        while (col <= row)
        {
            cout << char(character + row - 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}