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
    int iescolha = 0;
    float fvalor = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\n-----------------------\n";
    cout << "\n1- Poupança\n";
    cout << "\n2- Fundos de renda fixa";
    cout << "\n\n-----------------------";
    cout << "\nInsira o valor que quer investir: ";
    cin >> fvalor;
    cout << "\nEscolha uma opção: ";
    cin >> iescolha;

    switch (iescolha)
{
    case 1:

        {

        fresultado = fvalor + (fvalor * 03/100);
        cout << "\nO seu novo saldo em 1 mês será de " << fresultado << " reais";
        break;

        }

        case 2:

        {

        fresultado = fvalor + (fvalor * 04/100);
        cout << "\nO seu novo saldo em 1 mês será de " << fresultado << " reais";
        break;

        }

         default:
         cout <<"\nOpção Inválida";
}
        getch();

}
