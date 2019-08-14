/**********************************************************
- Autor:Bruno Henrique
- Descrição: MULTIPLICAÇÃO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  int N1=0;
  int N2=0;
  int N3=0;
  int Mult=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite o valor do primeiro numero  ";
cin  >> N1;

cout  << "Digite o valor do segundo numero  ";
cin  >> N2;

cout  << "Digite o valor do terceiro numero  ";
cin  >> N3;

Mult=N1*N2*N3;

cout  << "\n" << Mult;

    return 0;
}
