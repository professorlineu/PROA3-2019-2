/**********************************************************
- Autor:    Livia Grecco
- Descrição: Lista 3 - Ex.3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Insira o número 1: ";
    cin >> fNum1 ;

    cout << "Insira o número 2: ";
    cin >> fNum2 ;


    if (fNum1 < fNum2)
    cout << "primeiro número é menor  ";

    else
    cout << "segundo número é menor  ";



    return 0;
}
