/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba dois números e mostre o menor.
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
    // Ativa acentuação
    setlocale(LC_ALL,"");

    cout << "\nInsira o primeiro valor: ";
    cin >> fn1;
    cout << "\nInsira o segundo valor: ";
    cin >> fn2;

   if (fn1<fn2)
{

        cout << "\nO primeiro valor é o menor";

}

    else
{

        cout << "\nO segundo valor é o menor";

        getch();
        return 0;
}
}
