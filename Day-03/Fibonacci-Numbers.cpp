#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter a number to print Fibonacci series: ";
    cin >> N;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= N; i++)
    {
        int NextFibonacciNumbers = a + b;
        cout << NextFibonacciNumbers << " ";
        a = b;
        b = NextFibonacciNumbers;
    }
}