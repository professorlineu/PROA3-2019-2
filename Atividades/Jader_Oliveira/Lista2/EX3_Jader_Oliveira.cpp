/**********************************************************
- Autor:     Jader Oliveira
- Descri��o: Lista 2 EX1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //declara��o de vari�veis
    float fvalor1 = 0;
    float fvalor2 = 0;
    float fdiv = 0;

    //c�digo do programa
    cout << "digite o primeiro valor: ";
    cin >> fvalor1;

    cout << "digite o segundo valor: ";
    cin >> fvalor2;

    fdiv = fvalor1 / fvalor2;

    cout << "Resultado = " << fdiv;
}
