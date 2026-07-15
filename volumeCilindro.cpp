#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159

int main()
{
    float V, H, R;
    cout << "Entre a altura : ";
    cin >> H;
    cin.ignore(80, '\n');
    cout << "Entre o raio : ";
    cin >> R;
    cin.ignore(80, '\n');
    V = H * PI * pow(R, 2);
    cout << "O volume do Cilindro e : " << V << endl;

    return 0;
}