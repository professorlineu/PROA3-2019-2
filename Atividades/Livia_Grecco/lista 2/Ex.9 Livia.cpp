/**********************************************************
- Autor:     Livia Greccp
- Descri��o: Lista 2 - Exerc�cio 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fBMaior = 0;
    float fBMenor = 0;
    float fAltura = 0;
    float fArea = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Valor da base maior: ";
    cin >> fBMaior;

    cout << "Valor da base menor: ";
    cin >> fBMenor;

    cout << "Valor da altura: ";
    cin >> fAltura;

    //Calculo da �rea do trap�zio

    fArea = ((fBMaior + fBMenor)* fAltura)/2 ;

    cout << "Valor da �rea do trap�zio: " << fArea;


    return 0;
}
