/**********************************************************
- Autor:     Livia Greccp
- Descrição: Lista 2 - Exercício 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fBMaior = 0;
    float fBMenor = 0;
    float fAltura = 0;
    float fArea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Valor da base maior: ";
    cin >> fBMaior;

    cout << "Valor da base menor: ";
    cin >> fBMenor;

    cout << "Valor da altura: ";
    cin >> fAltura;

    //Calculo da área do trapézio

    fArea = ((fBMaior + fBMenor)* fAltura)/2 ;

    cout << "Valor da área do trapézio: " << fArea;


    return 0;
}
