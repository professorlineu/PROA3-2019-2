/**********************************************************
- Autor:    Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int  iNumero1  =  0;
    int  iNumero2  =  0;
    int  iSubtrai  =  0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout  <<  "iNumero1: ";
    cin   >>  iNumero1;

    cout  <<  "iNumero2: ";
    cin   >>  iNumero2;

    iSubtrai  =  iNumero1 - iNumero2;

    cout  <<  "Resultado =  "  << iSubtrai;

    return 0;
}
