/**********************************************************
- Autor:     Robson Gomes Torres
- Descri��o: lista 3 exrcicio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
     float num001 = 0;
     float num002 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
     cout << "digite 1� numero";

     cin  >>  num001;

     cout << "digite 2� numero";

     cin  >>  num002;

     if (num001 > num002)
     {
         cout << "num2 e menor  ";
     }
    else
    {
        cout << "num1 e menor";
    }


    return 0;
}
