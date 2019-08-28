/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista 3 exer.10
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

    cout << "\nQual o valor que a fábrica vende o carro para o distribuidor? ";
    cin >> fvalor;

   if (fvalor < 12000)
{
        fresultado = fvalor + (fvalor * 5/100);
        cout << "\nO preço de venda para o cliente deve ser de " <<fresultado;

}
    else if (fvalor < 25000 )
    {
        fresultado = fvalor + (fvalor * 25/100);
        cout << "\nO preço de venda para o cliente deve ser de " <<fresultado;
    }

     else
    {
        fresultado = fvalor + (fvalor * 35/100);
        cout << "\nO preço de venda para o cliente deve ser de " <<fresultado;
    }
        getch();
        return 0;
}
