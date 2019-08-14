/**********************************************************
- Autor:     Jader Oliveira
- Descrição: lista 2 EX2 mult. com 3 valores
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //declaração de variáveis
    int ival1 = 0;
    int ival2 = 0;
    int ival3 = 0;
    int iresul = 0;

    //código do programa
    cout << "informe o valor 1: ";
    cin >> ival1;

    cout << "informe o valor 2: ";
    cin >> ival2;

    cout << "informe o valor 3: ";
    cin >> ival3;

    iresul = ival1 * ival2 * ival3;

    cout << "Resultado = " << iresul;
}
