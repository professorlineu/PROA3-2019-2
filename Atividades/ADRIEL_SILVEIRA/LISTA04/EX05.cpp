/**********************************************************
- Autor:     Adriel Silveira
- Descrição: exercicio 5 lista 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 1 ;
    int ival = 0 ;
    int j = 1 ;
    int imult = 0 ;
    int imult2 = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



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

