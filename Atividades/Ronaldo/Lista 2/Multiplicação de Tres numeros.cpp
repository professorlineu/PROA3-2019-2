/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: lista 2 - 2 Multiplica��o de Tres numeros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fprimeiro1 = 0;
    float fsegundo2 = 0;
    float fsegundo3 = 0;
    float fResultado = 0;


    //C�digo do programa
    cout << "/nA multiplicacao do primeiro: ";
    cin >> fprimeiro1;

    cout << "/nA multiplicacao do segundo: ";
    cin >> fsegundo2;

    cout << "/nA multiplicacao do terceiro: ";
    cin >> fsegundo3;

    fResultado = fprimeiro1 * fsegundo2 * fsegundo3;

    cout << "O resultado �: " << fResultado;


    return 0;
}
