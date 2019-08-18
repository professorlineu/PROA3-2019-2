/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 01 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    double d_num1 = 0, d_num2 = 0, d_resultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o primeiro número: ";    // Recebe o valor do primeiro número
    cin >> d_num1;

    cout << "Digite o segundo número: ";    // Recebe o valor do segundo número
    cin  >> d_num2;


    d_resultado = d_num1 - d_num2;      // Calcula o valor da subtração

    cout << "O resultado da subtração é: " << d_resultado;

    return 0;
}

