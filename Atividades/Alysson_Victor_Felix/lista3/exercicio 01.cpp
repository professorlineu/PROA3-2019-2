/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 01
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
    float fnota3 = 0;
    float fnota4 = 0;
    float fmedia = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor da nota 1 �: ";
    cin >> fnota1;

    cout << "O valor da nota 2 �: ";
    cin >> fnota2;

    cout << "O valor da nota 3 �: ";
    cin >> fnota3;

    cout << "O valor da nota 4 �: ";
    cin >> fnota4;

    fmedia = ( fnota1 + fnota2 + fnota3 + fnota4) / 4;

   if(fmedia >= 7)
    {
      cout << "Aprovado com media: " << fmedia;
    }


    else
    {
       cout << "Reprovado com media: " << fmedia;
    }

    return 0;
}
