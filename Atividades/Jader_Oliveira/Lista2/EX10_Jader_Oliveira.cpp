/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fLado = 0;
    float fArea = 0;

    setlocale(LC_ALL,"");
    system("color F3");

    cout << "digite o valor do lado do quadrado \npara obter a área: ";
    cin >> fLado;

    fArea = fLado * fLado;

    cout << "a área do quadrado é: " << fArea;
}
