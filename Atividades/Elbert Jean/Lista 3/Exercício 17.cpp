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
    float fsenha = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual é a senha? ";
    cin >> fsenha;

   if (fsenha == 4531)
    {

    cout << "\nAcesso permitido! ";

    }

    else
    {

    cout << "\nAcesso negado!";

    }

    getch();
    return 0;

}
