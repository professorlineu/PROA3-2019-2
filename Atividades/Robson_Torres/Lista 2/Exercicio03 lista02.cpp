/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 03 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    double d_num1 = 0, d_num2 = 0,  d_resultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o primeiro n�mero: ";    // Recebe o valor do primeiro n�mero
    cin >> d_num1;

    cout << "Digite o segundo n�mero: ";    // Recebe o valor do segundo n�mero
    cin  >> d_num2;


    d_resultado = d_num1 / d_num2      // Calcula o valor da Divis�o

    cout << "O resultado da divisao: "; >> d_resultado;

    return 0;
}

