/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: exercicio 5 lista 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 1 ;
    int ival = 0 ;
    int j = 1 ;
    int imult = 0 ;
    int imult2 = 0 ;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    while ( i <= 10)
    {
        while (j <=10 )
        {

            cout << j <<" x " << i << " = " << (i * j) << "\n "  ;

            j++ ;
        }
        cout << ("\n");

        i++;

        j=1;


    }

    getch() ;

    return 0;
}

