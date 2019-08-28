/**********************************************************
- Autor:     Adalberto José
- Descrição: lista 4 exercicio 4, tabuada do 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int ival = 0;
    int imult = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


        cout << "\n Insira o numero que você  deseja da tabuada ";
        cin >> ival;

        while (i <= 10)
         {

         cout<<ival<< "x" <<i<< " = " << imult << "\n";
         i=i+1;


        imult = i* ival;



    } // fim do while / laço







    return 0;
}
