/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <ctype.h>


using namespace std;


int main()
{
    int inumero = 0;
    int icont = 0;
    int icont1 = 0;
    int icont2 = 1;
    int icont3 = 0;
    int icont4 = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    while ( icont < 5)
    {
        icont1++;
        cout <<"Insira o " << icont1 << "º número ";
        cin >> inumero;

        icont++;

        icont2 = 1;

        // verifica se o número é primo.
        while ( icont2 <= inumero )
        {
            if ( inumero % icont2 == 0)
            {
                icont3++;
            }
            icont2++;
        }

        if ( icont3 == 2)
        {
            icont4++;
        }
        icont3 = 0;
    }
    cout << "\nQuantidade de números primos = " << icont4 ;

}













