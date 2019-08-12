/**********************************************************
- Autor: Letícia da Silva Martins
- Descrição: Subtração de valores
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ivalor1 = 0;
    int ivalor2 = 0;
    int iResultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor 1 : ";
    cin >> ivalor1;

    cout << "Digite o valor 2 : ";
    cin >> ivalor2;

    iResultado = ivalor1 - ivalor2;

    cout << "Resultado: " << iResultado;


    return 0;
}
