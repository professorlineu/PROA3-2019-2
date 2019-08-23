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

    cout << "\nQual o valor do produto? ";
    cin >> fvalor;

   if (fvalor <= 30)
    {

    cout << "\nInfelizmente você não conseguiu um desconto no seu produto! ";

    }

    else if (fvalor <= 100)
    {

    fresultado = fvalor - (fvalor * 10/100);
    cout << "\nParabéns, você conseguiu um desconto de 10% no seu produto, seu novo preço é de " << fresultado << " reais";

    }

    else if (fvalor > 100)

    {

    fresultado = fvalor - (fvalor * 15/100);
    cout << "\nParabéns, você conseguiu um desconto de 15% no seu produto, seu novo preço é de " << fresultado << " reais";

    }

    getch();
    return 0;

}
