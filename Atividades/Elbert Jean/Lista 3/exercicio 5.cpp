/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio.
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
    cout << "1 - M�dia entre os n�meros digitados\n\n";
    cout << "2 - Diferen�a do maior pelo menor\n\n";
    cout << "3 - Produto entre os n�meros digitados\n\n";
    cout << "4 - Divis�o do primeiro pelo segundo\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:

            fmedia = (fn1 + fn2) /2;
            cout << "\nO resultado da sua conta � " << fmedia;
            break;

        case 2:

            if (fn1>fn2)
            {
                fmaior = fn1;
                fresult = fmaior - fn2;

                cout <<"\nO resultado da sua conta � " << fresult;
                break;
            }

            else if (fn1<fn2)

            {
                fmaior = fn2;
                fresult = fmaior - fn1;

                cout <<"\nO resultado da sua conta � " << fresult;
                break;
            }


        case 3:

            fmult = fn1 * fn2;
            cout << "\nO resultado da sua conta � " << fmult;
            break;

        case 4:

            fdiv = fn1 / fn2;
            cout << "\nO resultado da sua conta � " << fdiv;
            break;

            default:
            cout << "\nN�mero Inv�lido!";
    }
}
