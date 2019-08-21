/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 06
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main ()
{
    int iOperacao= 0;
    double dNum1 = 0, dNum2 = 0;
    double dPotencia = 0, dRaizQuad1 = 0, dRaizQuad2 = 0, dRaizCub1 = 0, dRaizCub2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o primeiro número: ";    // Recebe o valor do primeiro número
    cin >> dNum1;

    cout << "\nDigite o segundo número: ";    // Recebe o valor do segundo número
    cin >> dNum2;


    cout << "-------------------------------------------------\n\n";
    cout << "1 - O primeiro número elevado ao segundo número.\n\n";
    cout << "2 - Raiz quadrada de cada um dos números.\n\n";
    cout << "3 - Raiz cúbica de cada um dos números.\n\n";
    cout << "-------------------------------------------------\n\n";
    cout << "\nDigite o número correspondente a operação que deseja realizar: ";    // Recebe o valor da operação
    cin >> iOperacao;


    switch (iOperacao)
    {

        case 1:
            dPotencia = pow(dNum1 , dNum2);
            cout << "O valor do primeiro número elevado ao segundo é: " << dPotencia;
            break;

        case 2:
            dRaizQuad1 = sqrt (dNum1);
            cout << "O valor da raiz quadrada do primeiro número: " << dRaizQuad1 << endl;

            dRaizQuad2 = sqrt(dNum2);
            cout << "O valor da raiz quadrada do segundo número: " << dRaizQuad2;
            break;

        case 3:
            dRaizCub1 = cbrt (dNum1);
            cout << "O valor da raiz cúbica do primeiro número: " << dRaizCub1 << endl;

            dRaizCub2 = cbrt(dNum2);
            cout << "O valor da raiz cúbica do segundo número: " << dRaizCub2;
            break;

        default:
            cout << "Valor digitado inválido";

    }

	return 0;
}
