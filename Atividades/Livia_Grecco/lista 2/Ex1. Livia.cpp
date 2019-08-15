/**********************************************************
- Autor:    Livia Grecco
- Descrição: Lista 2 - Exercício 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int  iNumero1  =  0;
    int  iNumero2  =  0;
    int  iSubtrai  =  0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout  <<  "iNumero1: ";
    cin   >>  iNumero1;

    cout  <<  "iNumero2: ";
    cin   >>  iNumero2;

    iSubtrai  =  iNumero1 - iNumero2;

    cout  <<  "Resultado =  "  << iSubtrai;

    return 0;
}
