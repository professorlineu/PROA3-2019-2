/**********************************************************
- Autor: Elbert Jean
- Descrição: Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
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

    cout << "\nInsira o valor do saldo médio do último ano: ";
    cin >> fmedia;

   if (fmedia > 400)
{
        fresultado = fmedia + (fmedia * 30/100);
        cout << "\nVocê conseguiu " <<fresultado <<" de crédito";

}
    else if (fmedia >300 )
    {
        fresultado = fmedia + (fmedia * 25/100);
        cout << "\nVocê conseguiu " <<fresultado <<" de crédito";
    }

    else if (fmedia >200 )
    {
        fresultado = fmedia + (fmedia * 20/100);
        cout << "\nVocê conseguiu " <<fresultado <<" de crédito";
    }
     else
    {
        fresultado = fmedia + (fmedia * 10/100);
        cout << "\nVocê conseguiu " <<fresultado <<" de crédito";
    }
        getch();
        return 0;
}
