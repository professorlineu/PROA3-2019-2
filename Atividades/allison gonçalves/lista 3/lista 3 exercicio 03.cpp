/**********************************************************
- Autor:     allison g. de almeida
- Descri��o: exercicio 03- lista 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fnumero1 = 0;
    float fnumero2= 0;
    float fnumero3= 0;
    float fmaior = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

  cout << "\ninsira o primeiro valor ";
  cin  >> fnumero1;

  cout <<"\ninsira o segundo valor ";
  cin  >> fnumero2;

   cout <<"\ninsira o segundo valor ";
  cin  >> fnumero3;

  if (fnumero1>fnumero2 && fnumero1>fnumero3)
  {
      fmaior = fnumero1;

      cout <<"\no maior numero � " <<fmaior;
  }

  else if (fnumero2>fnumero1 && fnumero2>fnumero3)
  {
     fmaior = fnumero2;

     cout <<"\nomaior numero � " <<fmaior;

  }
  else if (fnumero3>fnumero1 && fnumero3>fnumero2)
  {
     fmaior = fnumero3;

     cout <<"\nomaior numero � " <<fmaior;

  }
}
