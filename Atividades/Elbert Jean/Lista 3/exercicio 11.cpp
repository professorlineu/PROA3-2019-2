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

   if (fvalor < 300)
{
        fresultado = fvalor + (fvalor * 15/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 15%. O seu novo sal�rio � de " <<fresultado << " reais";

}
    else if (fvalor < 600 )
    {
        fresultado = fvalor + (fvalor * 10/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 10%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

    else if (fvalor <= 900 )
    {
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 5%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

     else
    {
        cout << "\nInfelizmente voc� n�o poder� receber um aumento no seu sal�rio ";
    }
        getch();
        return 0;
}
