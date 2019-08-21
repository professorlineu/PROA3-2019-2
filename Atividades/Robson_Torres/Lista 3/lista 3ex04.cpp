/**********************************************************
- Autor:     Robson Gomes Torres
- Descrição: lista 3 exercicio 4
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
     float num003 = 0;
     float fMaior = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
     cout << "digite 1º numero";

     cin  >>  num001;

     cout << "digite 2º numero";

     cin  >>  num002;

     cout << "digite 3º numero";

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
    cout << "\n0 maior numero é:"  <<fMaior;
}
    return 0;
}
