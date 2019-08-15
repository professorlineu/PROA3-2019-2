/**********************************************************
- Autor:     Livia Greccp
- Descrição: Lista 2 - Exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fQuilo = 0;
    float fGramas = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite seu peso em kg: ";
    cin >> fQuilo;

    fGramas = fQuilo * 1000;

    cout << "Seu peso em gramas: " << fGramas;


    return 0;
}
