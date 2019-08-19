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
    float fn3 = 0;

    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");

    cout << "\nInsira o primeiro valor: ";
    cin >> fn1;
    cout << "\nInsira o segundo valor: ";
    cin >> fn2;
    cout << "\nInsira o terceiro valor: ";
    cin >> fn3;

   if (fn1>fn2 && fn1>fn3)
{

        cout << "\nO primeiro valor é o maior";

}
    else if(fn2>fn3)
    {
    cout << "\nO segundo valor é o maior";
    }
    else
{

        cout << "\nO terceiro valor é o maior";

        getch();
        return 0;
}
}
