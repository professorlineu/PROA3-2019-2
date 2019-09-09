/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 4 - Ex. 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declaração de variáveis
   int iResul = 0;
   int iTab = 0;
   int iMult = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa

    while ( iTab <= 10)
    {
        cout << "Tabuada do: " << iTab << endl;


        while ( iMult <= 10)
        {
            iResul = iTab * iMult;

            cout << iTab << " X " << iMult << " = " << iResul << endl;

            iMult++;
        }// fim do laço iMult
        iTab++;
        iMult = 0;


    } // fim do laço iTab








    return 0;
}
