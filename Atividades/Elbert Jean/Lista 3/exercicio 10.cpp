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
    float fvalor = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual o valor que a f�brica vende o carro para o distribuidor? ";
    cin >> fvalor;

   if (fvalor < 12000)
{
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nO pre�o de venda para o cliente deve ser de " <<fresultado;

}
    else if (fvalor < 25000 )
    {
        fresultado = fvalor + (fvalor * 25/100);
        cout << "\nO pre�o de venda para o cliente deve ser de " <<fresultado;
    }

     else
    {
        fresultado = fvalor + (fvalor * 35/100);
        cout << "\nO pre�o de venda para o cliente deve ser de " <<fresultado;
    }
        getch();
        return 0;
}
