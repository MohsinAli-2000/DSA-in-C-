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

        int noOfStar = input - row + 1;
        int col = 1;
        while (col <= noOfStar)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}