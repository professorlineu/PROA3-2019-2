/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Comando switch com n�meros
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
    cout << "1 - O primeiro n�mero elevado ao segundo n�mero\n\n";
    cout << "2 - Raiz quadrada de cada um dos n�meros\n\n";
    cout << "3 - Raiz c�bica de cada um dos n�meros\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:

            fpow = pow(fn1 , fn2);
            cout << "\nO valor da pot�ncia � " << fpow;
            break;

        case 2:

            cout << "\nRaiz quadrada do primeiro n�mero � " << sqrt(fn1);
            cout << "\nRaiz quadrada do segundo n�mero � " << sqrt(fn2);
            break;



        case 3:

            cout << "\nRaiz quadrada do primeiro n�mero � " << cbrt(fn1);
            cout << "\nRaiz quadrada do segundo n�mero � " << cbrt(fn2);
            break;


            default:
            cout << "\nOp��o inv�lida!";
    }

}
