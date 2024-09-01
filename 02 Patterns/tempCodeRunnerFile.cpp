#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number to print a pattern: ";
    cin >> input;
    int row = 1;
    int number = 1;
    while (row <= input)
    {
        int space = input - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int noOfPrints = input - row;
        int col = 1;
        while (col <= row)
        {
            cout << number;
            col++;
        }
        cout << endl;
        number++;
        row++;
    }
}