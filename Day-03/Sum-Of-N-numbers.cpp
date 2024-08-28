#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to find the sum of N numbers: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of " << n << " number is " << sum << ".";
}