/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: lista 2 - 1 Subtra��o de dois numero
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
    float fResultado = 0;


    //C�digo do programa
    cout << "A subtra��o do primeiro: ";
    cin >> fprimeiro1;

    cout << "A subtra��o do segundo: ";
    cin >> fsegundo2;

    fResultado = fprimeiro1 - fsegundo2;

    cout << "O resultado �: " << fResultado;


    return 0;
}
