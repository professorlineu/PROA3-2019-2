/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: lista 4 exercicio 4, tabuada do 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ival = 0;
    int imult = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa


        cout << "\n Insira o numero que voc�  deseja da tabuada ";
        cin >> ival;

        while (i <= 10)
         {

         cout<<ival<< "x" <<i<< " = " << imult << "\n";
         i=i+1;


        imult = i* ival;



    } // fim do while / la�o







    return 0;
}
