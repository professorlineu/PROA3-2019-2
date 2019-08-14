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
    float fQuilo = 0;
    float fGramas = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "digite seu peso em quilos\ne o verá em gramas: ";
    cin >> fQuilo;

    fGramas = fQuilo * 1000;

    cout << fGramas;

    return 0;
}
