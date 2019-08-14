/**********************************************************
- Autor:Bruno Henrique
- Descrição: DIVISÃO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  int N1=0;
  int N2=1;
  float Div=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite o valor do primeiro numero  ";
cin  >> N1;

cout  << "Digite o valor do segundo numero  ";
cin  >> N2;

Div=N1/N2;

cout  << "\n" << Div;

    return 0;
}
