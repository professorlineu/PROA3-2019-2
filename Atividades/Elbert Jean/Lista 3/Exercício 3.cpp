/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba dois n�meros e mostre o menor.
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
    float fn2 = 0;

    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");

    cout << "\nInsira o primeiro valor: ";
    cin >> fn1;
    cout << "\nInsira o segundo valor: ";
    cin >> fn2;

   if (fn1<fn2)
{

        cout << "\nO primeiro valor � o menor";

}

    else
{

        cout << "\nO segundo valor � o menor";

        getch();
        return 0;
}
}
