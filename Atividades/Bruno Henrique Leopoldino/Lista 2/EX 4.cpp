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
  float fMedia= 0;
  float fPeso1= 0;
  float fPeso2= 0;
  float fSoma1= 0;
  float fSoma2= 0;
  float ftotal= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite as duas notas:  ";
cin  >> fN1 >> fN2;

cout  << "Digite os dois pesos:  ";
cin  >> fPeso1 >> fPeso2;

fSoma1=fN1 * fPeso1;
fSoma2=fN2 * fPeso2;

ftotal=fPeso1 + fPeso2;

fMedia=(fSoma1 + fSoma2)/ftotal;

cout  << "\nMedia =" << fMedia;

    return 0;
}
