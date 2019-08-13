/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de preço com desconto de 10%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fPRECO1 = 0;
    float fDESCONTO2 = 0;

    float fPRECODESCONTO = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nPREÇO ATUAL DO PRODUTO 1: ";
    cin >> fPRECO1;


    fDESCONTO2 = fPRECO1 * 0.1;

    fPRECODESCONTO =  fPRECO1 - fDESCONTO2;

cout << "\nPREcO COM DESCONTO = " <<fPRECODESCONTO;

getch();

    return 0;
}

