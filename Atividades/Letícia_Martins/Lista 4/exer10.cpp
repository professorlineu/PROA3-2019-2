/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: La�o de repeti��o/Calculo e soma de n�meros pares e primos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ivalor = 0;
    int isomapares = 0;
    int isomaprimos = 0;
    int iprimos = 0;
    int inprimos = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa
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

    } // fim do while / la�o
   cout << "Soma dos n�meros pares : " <<
    isomapares << endl;
      cout << "Soma dos n�meros primos : " <<
    isomaprimos ;


    return 0;
}
