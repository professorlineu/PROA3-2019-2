/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 07 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fNOTA1 = 0;
    float fNOTA2 = 0;

    float fMEDIA = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nNOTA PROVA 1: ";
    cin >> fNOTA1;

    cout << " \nNOTA PROVA 2: ";
    cin >> fNOTA2;



    fMEDIA = ((fNOTA1*2) + (fNOTA2*3) ) /5 ;
cout << "\nresultado da divis�o = " <<fMEDIA;



    return 0;
}
