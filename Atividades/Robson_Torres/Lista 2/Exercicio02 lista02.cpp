/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 02 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    double d_num1 = 0, d_num2 = 0, d_num3 = 0, d_resultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o primeiro número: ";    // Recebe o valor do primeiro número
    cin >> d_num1;

    cout << "Digite o segundo número: ";    // Recebe o valor do segundo número
    cin  >> d_num2;

    cout << "Digite o terceiro número: ";    // Recebe o valor do terceiro número
    cin  >> d_num3;

    d_resultado = d_num1 * d_num2 * d_num3;      // Calcula o valor da multiplicação

    cout << "O resultado da multiplicação é: " << d_resultado;

    return 0;
}

