/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnota1 = 0;
    float fnota2 = 0;
    float fmedia = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor da nota 1 �: ";
    cin >> fnota1;

    cout << "O valor da nota 2 �: ";
    cin >> fnota2;

        fmedia = ( fnota1 + fnota2 ) / 2;

   if(fmedia >= 7)
    {
      cout << "Aprovado com media: " << fmedia;
    }

    else if (fmedia >= 3 && fmedia < 7)

    {
       cout << "Exame com media: " << fmedia;
    }


    else
    {
       cout << "Reprovado com media: " << fmedia;
    }

    return 0;
}
