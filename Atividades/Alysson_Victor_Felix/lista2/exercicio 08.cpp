/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fladoA = 0;
    float fladoB = 0;
    float fladoarea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "O valor do lado A é: ";
    cin >> fladoA;

    cout << "O valor do lado B é: ";
    cin >> fladoB;

    fladoarea = fladoA * fladoB;

    cout << "O valor da area do quadrado é: " << fladoarea;



    return 0;
}
