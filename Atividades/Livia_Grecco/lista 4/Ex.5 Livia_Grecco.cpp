/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 4 - Ex. 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declara��o de vari�veis
   int iResul = 0;
   int iTab = 0;
   int iMult = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa

    while ( iTab <= 10)
    {
        cout << "Tabuada do: " << iTab << endl;


        while ( iMult <= 10)
        {
            iResul = iTab * iMult;

            cout << iTab << " X " << iMult << " = " << iResul << endl;

            iMult++;
        }// fim do la�o iMult
        iTab++;
        iMult = 0;


    } // fim do la�o iTab








    return 0;
}
