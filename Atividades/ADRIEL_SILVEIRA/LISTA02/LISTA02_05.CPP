/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: calculo de pre�o com desconto de 10%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fPRECO1 = 0;
    float fDESCONTO2 = 0;

    float fPRECODESCONTO = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nPRE�O ATUAL DO PRODUTO 1: ";
    cin >> fPRECO1;


    fDESCONTO2 = fPRECO1 * 0.1;

    fPRECODESCONTO =  fPRECO1 - fDESCONTO2;

cout << "\nPREcO COM DESCONTO = " <<fPRECODESCONTO;

getch();

    return 0;
}

