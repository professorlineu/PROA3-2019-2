/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 3 - Exerc�cio 1/Nota e m�dia!
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float inota1=0;
    float inota2=0;
    float inota3=0;
    float inota4=0;
    float imedia=0;

    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
 cout << "\nDigite a primeira nota:";
 cin >> inota1;

 cout << "\nDigite a segunda nota:";
 cin >> inota2;

 cout << "\nDigite a terceira nota:";
 cin >> inota3;

 cout << "\nDigite a quarta nota:";
 cin >> inota4;

  //opera��es

  imedia = (inota1 + inota2 + inota3 + inota4)/4;

  cout << "\nSua M�dia �=" << imedia;

  if (imedia >= 7)
  {
     cout << "\nParab�ns voc� PASSOU!";
  }

  else
 {
     cout << "\nEstude mais um pouco, voc� N�O passou ";
 }

    return 0;
}
