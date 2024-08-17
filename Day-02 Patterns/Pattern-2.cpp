#include <iostream>
using namespace std;
int main()
{
    // today I have to print a number patterns where number value wil descreases in each column and I have to print this for N numbers of row

    int num;
    cout << "Enter a number to print pattern: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << num - j + 1;
            cout << " ";
            j++;
        }
        cout << endl;
        ;
        i++;
    }
}