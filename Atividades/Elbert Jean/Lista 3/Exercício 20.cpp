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

   if (fidade <=7)
    {

    cout << "\nVocê faz parte da categoria infantil! ";

    }

    else if (fidade <=10)
    {

    cout << "\nVocê faz parte da categoria juvenil!";

    }

    else if (fidade <=15)
    {

    cout << "\nVocê faz parte da categoria adolescente!";

    }

    else if (fidade <=30)
    {

    cout << "\nVocê faz parte da categoria adulto!";

    }

    else if (fidade >30)
    {

    cout << "\nVocê faz parte da categoria sênior!";

    }

    getch();
    return 0;

}
