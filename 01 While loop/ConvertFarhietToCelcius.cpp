#include <iostream>
using namespace std;

int main()
{
    // today I am going to write a code that will convert celcieus temp to Fahrenheit
    float farhTemp;
    float celciusTemp;

    cout << "Please enter temp in Fahrenheit to convert it into celcius temp: ";
    cin >> farhTemp;

    // now the fromula to convert from F to celcius is: (F - 32) x 5/9
    celciusTemp = (farhTemp - 32) * (5.0 / 9.0);
    cout << "The given Fahrenheit temperature is equal to " << celciusTemp << " in celcius!";
}