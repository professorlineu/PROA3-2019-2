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
    float media;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

   cout <<"digite a primeira nota :"; //Receba a primeira nota

   cin >> fnum1;

   cout <<"digite a segunda nota:";  // Receba a sgunda nota

   cin >> fnum2;


   fmedia = (fnum1 + fnum2 ) / 2; // Calcular o valor da média do aluno

   if(fmedia >=3) //Condoção caso o aluno tire 3 ou mais

   {(fmedia <7) // Condição para o aluno ficar de exame


   }


      cout  <<  "\Voce foi aprovado com media: " << fmedia;
   }

    else
    {
        cout <<"\nvocê foi Reprovado com média";
    }


    return 0;
}
