/**********************************************************
- Autor:     Robson torres
- Descri��o: Exercicio01 Lista3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;
    float media;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   cout <<"digite a primeira nota :"; //Receba a primeira nota

   cin >> fnum1;

   cout <<"digite a segunda nota:";  // Receba a sgunda nota

   cin >> fnum2;


   fmedia = (fnum1 + fnum2 ) / 2; // Calcular o valor da m�dia do aluno

   if(fmedia >=3) //Condo��o caso o aluno tire 3 ou mais

   {(fmedia <7) // Condi��o para o aluno ficar de exame


   }


      cout  <<  "\Voce foi aprovado com media: " << fmedia;
   }

    else
    {
        cout <<"\nvoc� foi Reprovado com m�dia";
    }


    return 0;
}
