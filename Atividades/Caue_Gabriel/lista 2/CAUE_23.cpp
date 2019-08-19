/**********************************************************
- Autor:    Caue Gabriel
- Descrição: Lista 2 - ex.23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fAng1 = 0;
    float fAng2 = 0;
    float fAng3 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Indique o valor de um Ângulo: ";
    cin >> fAng1;

    cout << "Indique outro valor de um Ângulo: ";
    cin >> fAng2;

    fAng3 = 180 - (fAng1 + fAng2);

    cout << "O valor do Ângulo será: " << fAng3 << endl;

    return 0;
}
