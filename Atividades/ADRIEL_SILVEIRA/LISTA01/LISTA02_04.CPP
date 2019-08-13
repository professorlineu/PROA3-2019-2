/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de media ponderada de nota final
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fNOTA1 = 0;
    float fNOTA2 = 0;

    float fMEDIA = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nNOTA PROVA 1: ";
    cin >> fNOTA1;

cout << " \nNOTA PROVA 2: ";
    cin >> fNOTA2;



    fMEDIA = ((fNOTA1*2) + (fNOTA2*3) ) /5 ;
cout << "\nresultado da divisão = " <<fMEDIA;

getch();

    return 0;
}
