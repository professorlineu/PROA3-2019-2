/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 3 - Exerc�cio 5 / Menu switch!!
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iescolha = 0;
    float fn1 = 0;
    float fn2 = 0;
    float fmedia = 0;
    float fmaior = 0;
    float fresult = 0;
    float fmult = 0;
    float fdiv = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\nDigite um n�mero:";
    cin >> fn1;

    cout << "\nDigite o segundo n�mero:";
    cin >> fn2;

    cout <<"___________________________________________\n\n";
    cout <<"1 - M�dia entre o n�meros digitados\n";
    cout <<"2 - Diferen�a do maior pelo menor\n";
    cout <<"3 - Produto entre os n�meros digitados\n";
    cout <<"4 - Divis�o do primeiro pelo segundo\n";
    cout <<"___________________________________________\n\n";

    cout << "\nOp��o:";
    cin >> iescolha;

    switch (iescolha)
    {
    case 1:

        fmedia = (fn1 + fn2)/2;

        cout << "\nA m�dia entre os n�meros � de:" << fmedia;
        break;

    case 2:
        if (fn1 > fn2)
        {

            fmaior = fn1;
            fresult = fmaior - fn2;

            cout << "\nO resultado �:" << fresult;
            break;
        }
        else if (fn1 < fn2)

            fmaior = fn2;
        fresult = fmaior - fn1;

        cout << "\nO resultado �:" << fresult;
        break;

    case 3:

        fmult = fn1 * fn2;

        cout << "\nO resultado �:" << fmult;
        break;

    case 4:

        fdiv = fn1 / fn2;

        cout << "\nO resultado �:" << fdiv;
        break;

    default:

        cout << "\nERRO!!! N�mero invalido!!!";

    }


    return 0;
}
