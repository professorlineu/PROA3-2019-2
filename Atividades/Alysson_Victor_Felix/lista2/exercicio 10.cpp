/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fdiamaior = 0;
    float fdiamenor = 0;
    float flosang = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "O valor da diagonal maior é: ";
    cin >> fdiamaior;

    cout << "O valor da diagonal menor é: ";
    cin >> fdiamenor;

    flosang = fdiamaior * fdiamenor / 2;

    cout << "O valor da area do losango é: " << flosang;



    return 0;
}
