/**********************************************************
- Autor:     Robson Torres
- Descri��o: LISTA 4 - EX.4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int iValor = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F45");

    //C�digo do programa

    cout << "Digite o n�mero da tabuada desejada: ";
    cin >> iValor;

    while (i < 10)
    {
        i = i + 1;

        cout << iValor << " X " << i << " = " << iValor * i << endl;
    }




    return 0;
}
