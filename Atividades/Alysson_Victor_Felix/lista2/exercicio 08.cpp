/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fladoA = 0;
    float fladoB = 0;
    float fladoarea = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor do lado A �: ";
    cin >> fladoA;

    cout << "O valor do lado B �: ";
    cin >> fladoB;

    fladoarea = fladoA * fladoB;

    cout << "O valor da area do quadrado �: " << fladoarea;



    return 0;
}
