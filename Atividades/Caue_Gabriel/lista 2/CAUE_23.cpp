/**********************************************************
- Autor:    Caue Gabriel
- Descri��o: Lista 2 - ex.23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fAng1 = 0;
    float fAng2 = 0;
    float fAng3 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Indique o valor de um �ngulo: ";
    cin >> fAng1;

    cout << "Indique outro valor de um �ngulo: ";
    cin >> fAng2;

    fAng3 = 180 - (fAng1 + fAng2);

    cout << "O valor do �ngulo ser�: " << fAng3 << endl;

    return 0;
}
