/**********************************************************
- Autor:     Jader Oliveira
- Descri��o: Lista 3 EX3
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

    cout << "digite o n�mero 1: ";
    cin >> fNum1;

    cout << "digite o n�mero 2: ";
    cin >> fNum2;

    if (fNum1>fNum2)
    cout << "n�mero 1 � maior " << fNum1;

    else
    cout << "numero 2 � maior " << fNum2;
}
