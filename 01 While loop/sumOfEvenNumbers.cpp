#include <iostream>
using namespace std;

int main()
{
    // we have to print some of all even numbers
    int n;
    int sum = 0;
    int num = 2;
    cout << "Please enter a number to find the sum of even numbers: ";
    cin >> n;
    while (num <= n)
    {
        sum = sum + num;
        num = num + 2;
    }

    cout << "The sum of even numbers between given range is: " << sum;
}