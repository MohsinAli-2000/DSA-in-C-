#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to print a pattern: ";
    cin >> number;
    int printNumber = 1;
    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            cout << printNumber << " ";
            printNumber++;
            col++;
        }
        cout << endl;
        row++;
    }
}