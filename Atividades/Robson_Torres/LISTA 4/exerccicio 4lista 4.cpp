/**********************************************************
- Autor:     Robson Torres
- Descrição: LISTA 4 - EX.4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iValor = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F45");

    //Código do programa

    cout << "Digite o número da tabuada desejada: ";
    cin >> iValor;

    while (i < 10)
    {
        i = i + 1;

        cout << iValor << " X " << i << " = " << iValor * i << endl;
    }




    return 0;
}
