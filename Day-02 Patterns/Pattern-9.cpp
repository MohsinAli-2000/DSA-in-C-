#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter any number to print a pattern: ";
    cin >> input;
    int row = 1;
    while (row <= input)
    {
        int col = 1;
        while (col <= input)
        {
            // char character = 'A' + row - 1;
            cout << char('A' + row - 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}