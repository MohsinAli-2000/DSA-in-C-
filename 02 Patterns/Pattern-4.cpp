#include <iostream>
using namespace std;

int main()
{
    // print start patterns
    int starNumbers;
    cout << "Enter number of to print stars: ";
    cin >> starNumbers;
    int row = 1;
    while (row <= starNumbers)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
    cout << endl;
    row++;
    }
}