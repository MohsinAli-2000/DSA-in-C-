#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int number;
    cout << "Enter a binary number to convert it into decimal number system: ";
    cin >> number;
    int binaryNumber = number;
    int i = 0;
    int ans = 0;
    while (binaryNumber != 0)
    {
        int digit = binaryNumber % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        binaryNumber = binaryNumber / 10;
        i++;
    }
    cout << "The given " << number << " in decimal is equal to: " << ans;
}