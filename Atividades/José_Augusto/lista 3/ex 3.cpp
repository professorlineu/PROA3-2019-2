                                                                                                                   /**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 3 - Exerc�cio 3 / Mostra o Maior n�mero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fn1 = 0;
    float fn2 = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   cout << "\nDigite um n�mero:";
   cin >> fn1;

   cout << "\nDigite outro n�mero:";
   cin >> fn2;

   if (fn1 < fn2)
   {
     cout << "\nO primeiro n�mero � o de menor valor!!!";
   }

   else
   {
     cout << "\nO segundo n�mero � o de menor valor!!!";
   }


    return 0;
}
