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
  float fMenor= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite o primeiro numero: ";
cin  >> fN1;

cout  << "Digite o segundo numero: ";
cin  >> fN2;

if  (fN1<fN2)

cout  << "\nO Primeiro numero é menor !!!";

else

cout  << "\nO Segundo numero é menor !!!";

    return 0;
}
