/**********************************************************
- Autor: Let�cia da Silva Martins
- Descri��o: Subtra��o de valores
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ivalor1 = 0;
    int ivalor2 = 0;
    int iResultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor 1 : ";
    cin >> ivalor1;

    cout << "Digite o valor 2 : ";
    cin >> ivalor2;

    iResultado = ivalor1 - ivalor2;

    cout << "Resultado: " << iResultado;


    return 0;
}
