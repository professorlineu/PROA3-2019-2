/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o:    Exercicio proposto 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ivalor = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor desejado: ";
    cin >> ivalor;

    while (i < 10)
    {

        i = i + 1;

        cout << ivalor << "x" << i << "=" << i * ivalor << endl;

    } // fim do while / la�o





    return 0;
}
