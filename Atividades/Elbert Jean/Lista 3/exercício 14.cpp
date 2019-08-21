/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
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

   if (fvalor <= 300 )
{
        fresultado = fvalor + (fvalor * 50/100);
        cout << "\nParabéns, você merece um aumento de 50%. O seu novo salário é de " <<fresultado << " reais";

}
    else if (fvalor <= 500 )
    {
        fresultado = fvalor + (fvalor * 40/100);
        cout << "\nParabéns, você merece um aumento de 40%. O seu novo salário é de " <<fresultado << " reais";
    }

    else if (fvalor <= 700 )
    {
        fresultado = fvalor + (fvalor * 30/100);
        cout << "\nParabéns, você merece um salário de 30%. O seu novo salário é de " <<fresultado << " reais";
    }

     else if (fvalor <= 800 )
    {
        fresultado = fvalor + (fvalor * 20/100);
        cout << "\nParabéns, você merece um salário de 20%. O seu novo salário é de " <<fresultado << " reais";
    }

    else if (fvalor <= 1000 )
    {
        fresultado = fvalor + (fvalor * 10/100);
        cout << "\nParabéns, você merece um salário de 10%. O seu novo salário é de " <<fresultado << " reais";
    }

    else if (fvalor > 1000 )
    {
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nParabéns, você merece um salário de 5%. O seu novo salário é de " <<fresultado << " reais";
    }
        getch();
        return 0;
}
