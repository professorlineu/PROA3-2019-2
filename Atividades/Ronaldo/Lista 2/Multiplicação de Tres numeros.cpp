/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: lista 2 - 2 Multiplicação de Tres numeros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fprimeiro1 = 0;
    float fsegundo2 = 0;
    float fsegundo3 = 0;
    float fResultado = 0;


    //Código do programa
    cout << "/nA multiplicacao do primeiro: ";
    cin >> fprimeiro1;

    cout << "/nA multiplicacao do segundo: ";
    cin >> fsegundo2;

    cout << "/nA multiplicacao do terceiro: ";
    cin >> fsegundo3;

    fResultado = fprimeiro1 * fsegundo2 * fsegundo3;

    cout << "O resultado é: " << fResultado;


    return 0;
}
