/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba o sal�rio atual de um funcion�rio e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo sal�rio.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fidade = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual a sua idade? ";
    cin >> fidade;

   if (fidade >= 18)
    {

    cout << "\nVoc� � de maior! ";

    }

    else
    {

    cout << "\nVoc� � de menor!";

    }

    getch();
    return 0;

}
