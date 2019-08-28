/**********************************************************
- Autor:     Adalberto José
- Descrição: lista 4 exercicio 5,
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
    int itabuada = 0;
    int imult = 0;
    int iresultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

        while (itabuada<=10)

        {



        cout << "\n  tabuada do  " <<itabuada <<endl;


        while (imult<=10)
         {

         iresultado = itabuada * imult;


         cout<<itabuada<< "x" <<imult<< " = " << iresultado << "\n";
         imult++;






    } // fim do while / laço

       itabuada++;
       imult=0;

        }


    return 0;
}
