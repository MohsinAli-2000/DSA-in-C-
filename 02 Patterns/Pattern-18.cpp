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
        int noOfStars = input - row + 1;
        int col = 1;
        while (col <= noOfStars)
        {
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}