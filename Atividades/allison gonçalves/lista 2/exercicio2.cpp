/**********************************************************
- Autor:   allison
- Descri��o: lista 2 exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ival1=0;
    int ival2=0;
    int ival3=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite um valor";
    cin >> ival1;
    cout << "digite outro valor";
    cin >> ival2;
    cout << "digite mais valor";
    cin >> ival3;

    cout << "resultado = " << ival1*ival2*ival3;

    return 0;
}
