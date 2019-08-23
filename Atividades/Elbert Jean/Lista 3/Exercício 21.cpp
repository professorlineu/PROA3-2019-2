/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int icodigo = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual o código do produto? ";
    cin >> icodigo;

   if (icodigo == 1)
    {

    cout << "\nO seu produto veio do Sul! ";

    }

    else if (icodigo == 2)
    {

    cout << "\nO seu produto veio do norte!";

    }

    else if (icodigo == 3)
    {

    cout << "\nO seu produto veio do leste!";

    }

    else if (icodigo == 4)
    {

    cout << "\nO seu produto veio do oeste!";

    }

    else if (icodigo == 5 || icodigo == 6)
    {

    cout << "\nO seu produto veio do nordeste!";

    }

    else if (icodigo <=9)
    {

    cout << "\nO seu produto veio do sudeste!";

    }

    else if (icodigo <=20)
    {

    cout << "\nO seu produto veio do centro-oeste!";

    }

    else if (icodigo <=30)
    {

    cout << "\nO seu produto veio do nordeste!";

    }

    getch();
    return 0;

}
