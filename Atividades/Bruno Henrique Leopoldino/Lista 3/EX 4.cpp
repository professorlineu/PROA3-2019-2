/**********************************************************
- Autor:Bruno Henrique
- Descri��o: M�dia
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  float fN1= 0;
  float fN2= 0;
  float fN3= 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "Digite o primeiro numero: ";
cin  >> fN1;

cout  << "Digite o segundo numero: ";
cin  >> fN2;

cout  << "Digite o terceiro numero: ";
cin  >> fN3;

if  (fN1>fN2 && fN1>fN3)

cout  << "\nO Primeiro numero � maior !!!";

else if  (fN1>fN3)

cout  << "\nO Segundo numero � maior !!!";

else

cout  <<"\nO Terceiro numero � o maior !!!";

    return 0;
}
