/**********************************************************
- Autor:Bruno Henrique
- Descri��o: Lista4- EX 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iValor= 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout  <<  "Digite o n�mero a ser calculado: ";
    cin  >> iValor;


    while (i < 10)
    {
        i = i + 1;

        cout << iValor << "x" << i << "=" << i * iValor << endl;
    }


    return 0;
}
