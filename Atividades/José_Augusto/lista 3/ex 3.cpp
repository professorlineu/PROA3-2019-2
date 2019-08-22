                                                                                                                   /**********************************************************
- Autor:     José Augusto
- Descrição: Lista 3 - Exercício 3 / Mostra o Maior número
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fn1 = 0;
    float fn2 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

   cout << "\nDigite um número:";
   cin >> fn1;

   cout << "\nDigite outro número:";
   cin >> fn2;

   if (fn1 < fn2)
   {
     cout << "\nO primeiro número é o de menor valor!!!";
   }

   else
   {
     cout << "\nO segundo número é o de menor valor!!!";
   }


    return 0;
}
