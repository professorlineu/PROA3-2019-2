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
  float fN4= 0;
  float fMedia= 0;
  float fTotal= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout  << "Digite a primeira nota: ";
cin  >> fN1;

cout  << "Digite a segunda nota: ";
cin  >> fN2;

cout  << "Digite a terceira nota: ";
cin  >> fN3;

cout  << "Digite a segunda nota: ";
cin  >> fN4;

fTotal=fN1 + fN2 + fN3 + fN4;

fMedia=fTotal / 4;

cout  << "\nMedia =" << fMedia;

if  (fMedia >= 6)

cout  << "\nAprovado!!";


else

cout  << "\nReprovado!!";

    return 0;
}
