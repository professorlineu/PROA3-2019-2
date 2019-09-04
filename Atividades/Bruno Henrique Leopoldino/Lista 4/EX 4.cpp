/**********************************************************
- Autor:Bruno Henrique
- Descrição: Lista4- EX 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iValor= 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout  <<  "Digite o número a ser calculado: ";
    cin  >> iValor;


    while (i < 10)
    {
        i = i + 1;

        cout << iValor << "x" << i << "=" << i * iValor << endl;
    }


    return 0;
}
