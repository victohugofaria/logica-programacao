#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int celsius;
    float fahrenheit;
    cout << "Qual a Temperatura : ";
    cin >> celsius;
    cin.ignore(40, '\n');
    fahrenheit = (1.8 * celsius) + 32;
    cout << setprecision(1) << fixed << "A temperatura em Fahrenheit e ....: " << fahrenheit << endl;

    return 0;
}