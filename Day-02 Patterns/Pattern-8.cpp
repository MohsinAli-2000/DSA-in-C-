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
        int col = 1;
        while (col <= row)
        {
            cout << (row - col + 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}