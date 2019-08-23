/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
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

    cout << "\nVocê é de maior! ";

    }

    else
    {

    cout << "\nVocê é de menor!";

    }

    getch();
    return 0;

}
