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
    float fmenor= 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

  cout << "\ninsira o primeiro valor ";
  cin  >> fnumero1;

  cout <<"\ninsira o segundo valor ";
  cin  >> fnumero2;

  if (fnumero1 <fnumero2)
  {
      fmenor = fnumero1;
      cout <<"\no menor numero � " <<fmenor;
  }

  else if (fnumero2 <fnumero1)
  {
     fmenor = fnumero2;

     cout <<"\nomenor numero � " <<fmenor;

  }
}
