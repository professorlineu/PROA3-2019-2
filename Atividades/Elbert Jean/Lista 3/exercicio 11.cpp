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
    float fvalor = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual o seu salário? ";
    cin >> fvalor;

   if (fvalor < 300)
{
        fresultado = fvalor + (fvalor * 15/100);
        cout << "\nParabéns, você merece um salário de 15%. O seu novo salário é de " <<fresultado << " reais";

}
    else if (fvalor < 600 )
    {
        fresultado = fvalor + (fvalor * 10/100);
        cout << "\nParabéns, você merece um salário de 10%. O seu novo salário é de " <<fresultado << " reais";
    }

    else if (fvalor <= 900 )
    {
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nParabéns, você merece um salário de 5%. O seu novo salário é de " <<fresultado << " reais";
    }

     else
    {
        cout << "\nInfelizmente você não poderá receber um aumento no seu salário ";
    }
        getch();
        return 0;
}
