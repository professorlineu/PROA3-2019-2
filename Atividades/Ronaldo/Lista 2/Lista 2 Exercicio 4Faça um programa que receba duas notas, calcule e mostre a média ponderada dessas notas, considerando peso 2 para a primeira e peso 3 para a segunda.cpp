/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Lista 2 - Exerc�cio 4 - programa que receba duas notas, calcule e mostre a m�dia ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda
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
