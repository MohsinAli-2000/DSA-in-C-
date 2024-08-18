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
        while (col <= row)
        {
            cout << char('A' + row + col - 2) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}