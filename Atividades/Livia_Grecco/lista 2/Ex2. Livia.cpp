/**********************************************************
- Autor:    Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 2
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
    int  iNumero3  =  0;
    int  iResultado  =  0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout  <<  "iNumero1: ";
    cin   >>  iNumero1;

    cout  <<  "iNumero2: ";
    cin   >>  iNumero2;

    cout  <<  "iNumero3: ";
    cin   >>  iNumero3;

    iResultado  =  iNumero1 * iNumero2 * iNumero3;

    cout  <<  "Resultado =  "  << iResultado;

    return 0;
}
