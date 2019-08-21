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

   if (fvalor < 350)
{
        fresultado = ((fvalor + 100) - (fvalor * 07/100));
        cout << "\nO seu salário com bonificação já com o desconto do imposto é de " << fresultado << " reais";

}
    else if (fvalor < 600 )
    {
        fresultado = ((fvalor + 75) - (fvalor * 07/100));
        cout << "\nO seu salário com bonificação já com o desconto do imposto é de " << fresultado << " reais";
    }

    else if (fvalor < 900 )
    {
        fresultado = ((fvalor + 50) - (fvalor * 07/100));
        cout << "\nO seu salário com bonificação já com o desconto do imposto é de " << fresultado << " reais";
    }

     else if (fvalor>=900)
    {
        fresultado = ((fvalor + 35) - (fvalor * 07/100));
        cout << "\nO seu salário com bonificação já com o desconto do imposto é de " << fresultado << " reais";
    }
        getch();
        return 0;
}
