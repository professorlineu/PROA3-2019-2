/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX5
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fValor = 0;
    float fDesconto = 0;

    cout << "digite o valor do produto: ";
    cin >> fValor;

    fDesconto = fValor - (fValor*0.1);

    cout << "com o desconto de 10% valor e: " << fDesconto;
}
