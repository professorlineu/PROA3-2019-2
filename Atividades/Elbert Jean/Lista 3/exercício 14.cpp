/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba o sal�rio de um funcion�rio e, usando a tabela a seguir, calcule e mostre
o novo sal�rio.
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

   if (fvalor <= 300 )
{
        fresultado = fvalor + (fvalor * 50/100);
        cout << "\nParab�ns, voc� merece um aumento de 50%. O seu novo sal�rio � de " <<fresultado << " reais";

}
    else if (fvalor <= 500 )
    {
        fresultado = fvalor + (fvalor * 40/100);
        cout << "\nParab�ns, voc� merece um aumento de 40%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

    else if (fvalor <= 700 )
    {
        fresultado = fvalor + (fvalor * 30/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 30%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

     else if (fvalor <= 800 )
    {
        fresultado = fvalor + (fvalor * 20/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 20%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

    else if (fvalor <= 1000 )
    {
        fresultado = fvalor + (fvalor * 10/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 10%. O seu novo sal�rio � de " <<fresultado << " reais";
    }

    else if (fvalor > 1000 )
    {
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nParab�ns, voc� merece um sal�rio de 5%. O seu novo sal�rio � de " <<fresultado << " reais";
    }
        getch();
        return 0;
}
