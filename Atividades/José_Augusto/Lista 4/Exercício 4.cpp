/**********************************************************
- Autor:     José Augusto
- Descrição: Lista 4 - Ex 4 / tabuada do número inserido
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int imult = 0;
    int ivalor= 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nDigite um número:";
    cin >> ivalor;

    while (i < 10)
  {
   i = i + 1;

   imult = ivalor * i;

   cout << ivalor << "x" << i << "=" << imult << endl;

  }




    return 0;
}
