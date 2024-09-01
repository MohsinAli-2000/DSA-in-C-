#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number to print a pattern: ";
    cin >> input;
    int row = 1;
    char character = 'A';
    while (row <= input)
    {
        int col = 1;
        while (col <= row)
        {
            cout << character << " ";
            character++;
            col++;
        }
        cout << endl;
        row++;
    }
}