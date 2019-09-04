/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Laço de repetição/Calculo e soma de números pares e primos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int ivalor = 0;
    int isomapares = 0;
    int isomaprimos = 0;
    int iprimos = 0;
    int inprimos = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    while (i <10)
    {
        cout << "Digite o valor desejado: ";
     cin  >> ivalor ;

     if (ivalor % 2 == 0)
     {
         isomapares += ivalor;
     }

        i = i + 1;

  iprimos = ivalor ;

  while (iprimos<=ivalor && iprimos >=1)
  {
      if (ivalor % iprimos == 0 )
      {
          inprimos++;
      }
          iprimos--;

  }
    if (inprimos ==2)
    {
        isomaprimos+=ivalor;
    }
        inprimos = 0;

    } // fim do while / laço
   cout << "Soma dos números pares : " <<
    isomapares << endl;
      cout << "Soma dos números primos : " <<
    isomaprimos ;


    return 0;
}
