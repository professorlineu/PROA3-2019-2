/**********************************************************
- Autor: Elbert Jean
- Descri��o: Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no �ltimo ano. Fa�a
um programa que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de acordo com a tabela a
seguir. Mostre o saldo m�dio e o valor do cr�dito.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fmedia = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nInsira o valor do saldo m�dio do �ltimo ano: ";
    cin >> fmedia;

   if (fmedia > 400)
{
        fresultado = fmedia + (fmedia * 30/100);
        cout << "\nVoc� conseguiu " <<fresultado <<" de cr�dito";

}
    else if (fmedia >300 )
    {
        fresultado = fmedia + (fmedia * 25/100);
        cout << "\nVoc� conseguiu " <<fresultado <<" de cr�dito";
    }

    else if (fmedia >200 )
    {
        fresultado = fmedia + (fmedia * 20/100);
        cout << "\nVoc� conseguiu " <<fresultado <<" de cr�dito";
    }
     else
    {
        fresultado = fmedia + (fmedia * 10/100);
        cout << "\nVoc� conseguiu " <<fresultado <<" de cr�dito";
    }
        getch();
        return 0;
}
