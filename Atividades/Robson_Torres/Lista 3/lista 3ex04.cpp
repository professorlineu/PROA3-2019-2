/**********************************************************
- Autor:     Robson Gomes Torres
- Descri��o: lista 3 exercicio 4
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
     float num003 = 0;
     float fMaior = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
     cout << "digite 1� numero";

     cin  >>  num001;

     cout << "digite 2� numero";

     cin  >>  num002;

     cout << "digite 3� numero";

     cin  >>  num003;


     if (num001 >= num002)
     {
          fMaior = num001;

     }

    else
    {
        fMaior = num002;
    }

    if(num003 >= fMaior)
    {
     fMaior = num003;
    }

{
    cout << "\n0 maior numero �:"  <<fMaior;
}
    return 0;
}
