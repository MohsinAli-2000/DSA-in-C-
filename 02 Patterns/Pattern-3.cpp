#include <iostream>
using namespace std;

int main()
{
    // print counting in N numbers or rows and columns
    int num;
    int col;
    int count = 1;

    cout << "Enter the Number you want to print: ";
    cin >> num;

    cout << "Enter the Number of columns you want to print: ";
    cin >> col;

    while (count <= num)
    {
        int i = 1;
        while (i <= col && count <= num)
        {
            cout << count << " ";
            count++;
            i++;
        }
        cout << endl; 
    }

    return 0;
}
