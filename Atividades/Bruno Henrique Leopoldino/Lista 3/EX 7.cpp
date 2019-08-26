/**********************************************************
- Autor:Bruno Henrique
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  float fSalario= 0;
  float fAjuste= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
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
cout  << "\nEste é o seu salario !!" << fAjuste;

    return 0;
}
