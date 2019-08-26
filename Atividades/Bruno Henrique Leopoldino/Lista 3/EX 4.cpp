/**********************************************************
- Autor:Bruno Henrique
- Descrição: Média
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  float fN1= 0;
  float fN2= 0;
  float fN3= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite o primeiro numero: ";
cin  >> fN1;

cout  << "Digite o segundo numero: ";
cin  >> fN2;

cout  << "Digite o terceiro numero: ";
cin  >> fN3;

if  (fN1>fN2 && fN1>fN3)

cout  << "\nO Primeiro numero é maior !!!";

else if  (fN1>fN3)

cout  << "\nO Segundo numero é maior !!!";

else

cout  <<"\nO Terceiro numero é o maior !!!";

    return 0;
}
