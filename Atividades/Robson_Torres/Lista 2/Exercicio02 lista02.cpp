/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 02 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    double d_num1 = 0, d_num2 = 0, d_num3 = 0, d_resultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o primeiro n�mero: ";    // Recebe o valor do primeiro n�mero
    cin >> d_num1;

    cout << "Digite o segundo n�mero: ";    // Recebe o valor do segundo n�mero
    cin  >> d_num2;

    cout << "Digite o terceiro n�mero: ";    // Recebe o valor do terceiro n�mero
    cin  >> d_num3;

    d_resultado = d_num1 * d_num2 * d_num3;      // Calcula o valor da multiplica��o

    cout << "O resultado da multiplica��o �: " << d_resultado;

    return 0;
}

