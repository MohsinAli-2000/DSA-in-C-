#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number to check whether its prime or not: ";
    cin >> N;
    bool isPrime = true;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }

    if (isPrime)
    {
        cout << "The given number " << N << " is a prime number.";
    }
    else
    {
        cout << "The given number " << N << " is not a prime number.";
    }
}