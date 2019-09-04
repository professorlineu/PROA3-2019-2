/**********************************************************
- Autor: allison g. de almeida
- lista 4 exercicio 05
- Descrição:faça um programa que mostre as tabuadas dos números de 1 a 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{

    int inum = 0, i = 0;
    int imult = 0;

    setlocale( LC_ALL,"");
    system("color F1");

    while (inum <  10)
    {
        inum++;

        cout << "tabuada do: " << inum << endl;

        while (i < 11)
        {
            imult = i * inum;
            cout << " x " << i << " = " << imult << endl;
            i++;

        } // fim do while "i"

        i=0;

    } // fim do while "inum"



        return 0;

}
