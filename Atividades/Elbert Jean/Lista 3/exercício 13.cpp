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

    cout << "\nQual o valor do seu produto? ";
    cin >> fvalor;

   if (fvalor < 50)
{
        fresultado = fvalor + (fvalor * 05/100);
        cout << "\nO novo pre�o do produto � " << fresultado << " reais";

}
    else if (fvalor <= 100 )
    {
        fresultado = fvalor + (fvalor * 10/100);
        cout << "\nO novo pre�o do produto � " << fresultado << " reais";
    }

    else if (fvalor > 100 )
    {
        fresultado = fvalor + (fvalor * 15/100);
        cout << "\nO novo pre�o do produto � " << fresultado << " reais";
    }

    if (fresultado < 80)
    {
    cout <<"\nO seu produto � barato!" ;
    }

    else if (fresultado < 120)
    {
    cout <<"\nO seu produto tem o pre�o normal" ;
    }

    else if (fresultado < 200)
    {
    cout <<"\nO seu produto � caro!" ;
    }

    else if (fresultado >= 200)
    {
    cout <<"\nO seu produto � muito caro!!!" ;
    }




}
