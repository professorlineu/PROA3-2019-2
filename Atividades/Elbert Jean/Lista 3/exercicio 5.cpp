/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
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
    float fmedia = 0;
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
    cout << "1 - Média entre os números digitados\n\n";
    cout << "2 - Diferença do maior pelo menor\n\n";
    cout << "3 - Produto entre os números digitados\n\n";
    cout << "4 - Divisão do primeiro pelo segundo\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:

            fmedia = (fn1 + fn2) /2;
            cout << "\nO resultado da sua conta é " << fmedia;
            break;

        case 2:

            if (fn1>fn2)
            {
                fmaior = fn1;
                fresult = fmaior - fn2;

                cout <<"\nO resultado da sua conta é " << fresult;
                break;
            }

            else if (fn1<fn2)

            {
                fmaior = fn2;
                fresult = fmaior - fn1;

                cout <<"\nO resultado da sua conta é " << fresult;
                break;
            }


        case 3:

            fmult = fn1 * fn2;
            cout << "\nO resultado da sua conta é " << fmult;
            break;

        case 4:

            fdiv = fn1 / fn2;
            cout << "\nO resultado da sua conta é " << fdiv;
            break;

            default:
            cout << "\nNúmero Inválido!";
    }
}
