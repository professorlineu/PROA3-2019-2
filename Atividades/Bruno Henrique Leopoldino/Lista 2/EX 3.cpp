/**********************************************************
- Autor:Bruno Henrique
- Descri��o: DIVIS�O
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  int N1=0;
  int N2=1;
  float Div=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "Digite o valor do primeiro numero  ";
cin  >> N1;

cout  << "Digite o valor do segundo numero  ";
cin  >> N2;

Div=N1/N2;

cout  << "\n" << Div;

    return 0;
}
