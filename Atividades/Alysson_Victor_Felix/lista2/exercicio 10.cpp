/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fdiamaior = 0;
    float fdiamenor = 0;
    float flosang = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor da diagonal maior �: ";
    cin >> fdiamaior;

    cout << "O valor da diagonal menor �: ";
    cin >> fdiamenor;

    flosang = fdiamaior * fdiamenor / 2;

    cout << "O valor da area do losango �: " << flosang;



    return 0;
}
