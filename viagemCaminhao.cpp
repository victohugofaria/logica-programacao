#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float distancia, tempoGasto, velocidade, combustivelGasto;
    cout << setprecision(2);
    cout << fixed;
    cout << "Qual o tempo gasto, em horas, da viagem : ";
    cin >> tempoGasto;
    cin.ignore(40, '\n');
    cout << "Qual a velocidade media, em KM, da viagem : ";
    cin >> velocidade;
    cin.ignore(40, '\n');
    distancia = tempoGasto * velocidade;
    combustivelGasto = distancia / 12;
    cout << endl
         << "Velocidade media ......:" << setw(10) << velocidade << " Km/hr" << endl;
    cout << "Tempo gasto ...........:" << setw(10) << tempoGasto << " Horas" << endl;
    cout << "Distancia percorrida ..:" << setw(10) << distancia << " Quilometros" << endl;
    cout << "Combustivel gasto .....:" << setw(10) << combustivelGasto << " Litros" << endl;
    return 0;
}