#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to print a pattern: ";
    cin >> number;
    int row = 1;
    while (row <= number)
    {
        // int value = row;
        int col = 1;
        while (col <= row)
        {
            // cout << value << " ";
            cout << (row + col - 1) << " ";
            // value++;
            col++;
        }
        cout << endl;
        row++;
    }
}