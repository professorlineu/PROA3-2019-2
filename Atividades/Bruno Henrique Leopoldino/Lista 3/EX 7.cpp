/**********************************************************
- Autor:Bruno Henrique
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  float fSalario= 0;
  float fAjuste= 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "Digite o valor do salario: ";
cin  >> fSalario;

if  (fSalario <500)
{
    fAjuste=fSalario = fSalario+(fSalario*30/100);
}
else
{
    fAjuste=fSalario;
}
cout  << "\nEste � o seu salario !!" << fAjuste;

    return 0;
}
