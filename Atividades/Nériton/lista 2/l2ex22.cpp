/**********************************************************
- Autor:     N�riton
- Descri��o: LISTA 2 - EX.22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fNL = 0;
    float fND = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Indique o numero de lados do pol�gono convexo: ";
    cin >> fNL;

    fND = fNL * (fNL - 3) /2;

    cout << "\n>>> O n�mero de diagonais �: " << fND << endl;


    return 0;
}
