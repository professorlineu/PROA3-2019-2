/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 4 - Ex 4 / tabuada do n�mero inserido
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int imult = 0;
    int ivalor= 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\nDigite um n�mero:";
    cin >> ivalor;

    while (i < 10)
  {
   i = i + 1;

   imult = ivalor * i;

   cout << ivalor << "x" << i << "=" << imult << endl;

  }




    return 0;
}
