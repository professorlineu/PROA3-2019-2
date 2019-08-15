/**********************************************************
- Autor:     Livia Greccp
- Descrição: Lista 2 - Exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fLado = 0;
    float fArea = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o lado do quadrado: ";
    cin >> fLado;

    fArea = fLado * fLado;

    cout << "Área do quadrado = " << fArea;

    return 0;
}
