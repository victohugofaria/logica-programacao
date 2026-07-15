#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float HT, VH, PD, TD, SB, SL;
    cout << setprecision(2);
    cout << fixed;
    cout << "Entre a quantidade de horas trabalhadas ...: ";
    cin >> HT;
    cin.ignore(80, '\n');
    cout << "Entre o valor da hora de trabalho .........: ";
    cin >> VH;
    cin.ignore(80, '\n');
    cout << "Percentual de desconto ....................: ";
    cin >> PD;
    cin.ignore(80, '\n');
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
    cout << "\n";
    cout << "Salario Bruto ....: " << setw(8) << SB << endl;
    cout << "Desconto .........: " << setw(8) << TD << endl;
    cout << "Salario Liquido ..: " << setw(8) << SL << endl;

    return 0;
}