/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float fn1 = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQuantos graus est� fazendo no momento? ";
    cin >> fn1;

    fresultado = 180 * (fn1 + 32)/100;

    cout << "\nO valor em Fahrenheit � de " << fresultado << " graus";

    getch ();

    return 0;

    }

