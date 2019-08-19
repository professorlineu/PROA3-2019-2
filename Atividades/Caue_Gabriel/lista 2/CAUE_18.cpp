/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 2 - EX.18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fCelsius = 0;
    float fFahren = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Determine a temperatura em °C: ";
    cin >> fCelsius;

    fFahren = 180 * (fCelsius + 32) / 100;

    cout << "\n>> sua temperatura em Fahrenheit: " << fFahren << endl;


    return 0;
}
