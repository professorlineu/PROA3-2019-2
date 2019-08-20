/**********************************************************
- Autor:   allison
- Descrição: lista 2 exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ival1=0;
    int ival2=0;
    int ival3=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite um valor";
    cin >> ival1;
    cout << "digite outro valor";
    cin >> ival2;
    cout << "digite mais valor";
    cin >> ival3;

    cout << "resultado = " << ival1*ival2*ival3;

    return 0;
}
