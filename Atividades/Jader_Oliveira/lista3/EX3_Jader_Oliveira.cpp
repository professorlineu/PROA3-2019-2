/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 3 EX3
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float fNum1 = 0;
    float fNum2 = 0;

     setlocale(LC_ALL,"portuguese");
    system("color F3");

    cout << "digite o número 1: ";
    cin >> fNum1;

    cout << "digite o número 2: ";
    cin >> fNum2;

    if (fNum1>fNum2)
    cout << "número 1 é maior " << fNum1;

    else
    cout << "numero 2 é maior " << fNum2;
}
