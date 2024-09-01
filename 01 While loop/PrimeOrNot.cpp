#include <iostream>
using namespace std;

int main()
{
    // Check if the number is prime or not
    int num;
    bool isPrime = true;

    cout << "Enter the number to check if it is a prime number or not: ";
    cin >> num;

    if (num < 2)
    {
        isPrime = false;
    }
    else
    {
        for (int divider = 2; divider <= num / 2; ++divider)
        {
            if (num % divider == 0)
            {
                isPrime = false;
                break; // Exit the loop as we found a divisor
            }
        }
    }

    if (isPrime)
    {
        cout << "The given number is a prime number" << endl;
    }
    else
    {
        cout << "The given number is not a prime number" << endl;
    }

    return 0;
}
