/**********************************************************
- Autor:     Nériton
- Descrição: LISTA 2 - EX.22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fNL = 0;
    float fND = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Indique o numero de lados do polígono convexo: ";
    cin >> fNL;

    fND = fNL * (fNL - 3) /2;

    cout << "\n>>> O número de diagonais é: " << fND << endl;


    return 0;
}
