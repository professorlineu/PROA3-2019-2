/**********************************************************
- Autor:     Robson torres
- Descrição: Exercicio01 Lista3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;
    float fnum4 = 0;
    float fmedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

   cout <<"digite a primeira nota :"; //Receba a primeira nota

   cin >> fnum1;

   cout <<"digite a segunda nota:";  // Receba a sgunda nota

   cin >> fnum2;

   cout <<"digite a terceira nota:"; //Receba a terceira nota

    cin >> fnum3;

   cout <<"digite a quarta  nota:"; //Receba a quarta nota

   cin >> fnum4;

   fmedia = (fnum1 + fnum2 + fnum3 + fnum4) /4; // Calcular ovalor da média do aluno

   if(fmedia >=7)

   {
      cout  <<  "\Voce foi aprovado com media: " << fmedia;
   }

    else
    {
        cout <<"\nvocê foi Reprovado com média";
    }


    return 0;
}
