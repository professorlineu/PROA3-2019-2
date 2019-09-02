/**********************************************************
- Autor:     Adriel Silveira
- Descrição: exercicio 8 da lista de estrutura condicional
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

   int i = 0 ;
   int ival = 0 ;
   int imult = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " digite o valor da tabuada desejada " ;
    cin >> ival ;

         while (i <=10 )
    {

    cout << ival <<" x " << i << " = " << imult << "\n" ;
     i = i +1;
     imult = i * ival ;

   } // fim do while / laço

    return 0;
}

