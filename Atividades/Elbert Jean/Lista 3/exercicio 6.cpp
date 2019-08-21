/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comando switch com números
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

main()
{
    int iEscolha;
    float fn1 = 0;
    float fn2 = 0;
    float fpow = 0;
    float fmaior = 0;
    float fresult = 0;
    float fmult = 0;
    float fdiv = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\nInsira o primeiro valor: ";
    cin >> fn1;
    cout << "Insira o segundo valor: ";
    cin >> fn2;


    cout << "----------------------------------------\n";
    cout << "1 - O primeiro número elevado ao segundo número\n\n";
    cout << "2 - Raiz quadrada de cada um dos números\n\n";
    cout << "3 - Raiz cúbica de cada um dos números\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:

            fpow = pow(fn1 , fn2);
            cout << "\nO valor da potência é " << fpow;
            break;

        case 2:

            cout << "\nRaiz quadrada do primeiro número é " << sqrt(fn1);
            cout << "\nRaiz quadrada do segundo número é " << sqrt(fn2);
            break;



        case 3:

            cout << "\nRaiz quadrada do primeiro número é " << cbrt(fn1);
            cout << "\nRaiz quadrada do segundo número é " << cbrt(fn2);
            break;


            default:
            cout << "\nOpção inválida!";
    }

}
