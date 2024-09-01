#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long N;
    cout << "Enter a number to convert it into binary digits: ";
    cin >> N;
    long long number = N;
    long long ans = 0;
    int i = 0;
    while (number != 0)
    {
        int bit = number & 1;
        ans = (bit * pow(10, i)) + ans;
        number = number >> 1;
        i++;
    }
    cout << "The " << N << " in binary is: " << ans;
}