/**********************************************************
- Autor:     Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

      float fNota1 = 0;
      float fNota2 = 0;
      float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Valor da nota 1: ";
    cin  >> fNota1;

    cout << "Valor da nota 2: ";
    cin  >> fNota2;

    fMedia  =  (fNota1*0.2) + (fNota2*0.3);

    cout << "M�dia Ponderada = "  << fMedia;

    return 0;
}
