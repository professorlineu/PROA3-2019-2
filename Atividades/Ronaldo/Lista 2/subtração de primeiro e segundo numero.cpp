/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: lista 2 - 1 Subtração de dois numero
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
    float fResultado = 0;


    //Código do programa
    cout << "A subtração do primeiro: ";
    cin >> fprimeiro1;

    cout << "A subtração do segundo: ";
    cin >> fsegundo2;

    fResultado = fprimeiro1 - fsegundo2;

    cout << "O resultado é: " << fResultado;


    return 0;
}
