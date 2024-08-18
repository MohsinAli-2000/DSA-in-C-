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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int noOfPrints = input - row + 1;
        int col = 1;
        int number = row - 1 + 1;
        while (col <= noOfPrints)
        {
            cout << number;
            number++;
            col++;
        }
        cout << endl;
        row++;
    }
}