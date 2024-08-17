#include <iostream>
using namespace std;

int main()
{
    // I have to print a pattern where we will see N number in sequence of column for N numbers of row

    int num;
    cout << "Enter a number to print pattern: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}