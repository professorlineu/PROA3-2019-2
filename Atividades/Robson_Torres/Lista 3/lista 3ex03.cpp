/**********************************************************
- Autor:     Robson Gomes Torres
- Descrição: lista 3 exrcicio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
     float num001 = 0;
     float num002 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
     cout << "digite 1º numero";

     cin  >>  num001;

     cout << "digite 2º numero";

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
