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
    float fvalor = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual o seu sal�rio? ";
    cin >> fvalor;

   if (fvalor < 350)
{
        fresultado = ((fvalor + 100) - (fvalor * 07/100));
        cout << "\nO seu sal�rio com bonifica��o j� com o desconto do imposto � de " << fresultado << " reais";

}
    else if (fvalor < 600 )
    {
        fresultado = ((fvalor + 75) - (fvalor * 07/100));
        cout << "\nO seu sal�rio com bonifica��o j� com o desconto do imposto � de " << fresultado << " reais";
    }

    else if (fvalor < 900 )
    {
        fresultado = ((fvalor + 50) - (fvalor * 07/100));
        cout << "\nO seu sal�rio com bonifica��o j� com o desconto do imposto � de " << fresultado << " reais";
    }

     else if (fvalor>=900)
    {
        fresultado = ((fvalor + 35) - (fvalor * 07/100));
        cout << "\nO seu sal�rio com bonifica��o j� com o desconto do imposto � de " << fresultado << " reais";
    }
        getch();
        return 0;
}
