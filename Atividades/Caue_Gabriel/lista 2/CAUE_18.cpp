/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 2 - EX.18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fCelsius = 0;
    float fFahren = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Determine a temperatura em �C: ";
    cin >> fCelsius;

    fFahren = 180 * (fCelsius + 32) / 100;

    cout << "\n>> sua temperatura em Fahrenheit: " << fFahren << endl;


    return 0;
}
