/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Fa�a um programa que receba dez n�meros, calcule e mostre a soma dos n�meros pares e a soma dos
n�meros primos.
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
        cout <<"Insira o " << icont1 << "� n�mero ";
        cin >> inumero;

        icont++;

        icont2 = 1;

        // verifica se o n�mero � primo.
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
    cout << "\nQuantidade de n�meros primos = " << icont4 ;

}













