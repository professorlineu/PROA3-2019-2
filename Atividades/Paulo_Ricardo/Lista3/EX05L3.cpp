/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Exerc�cio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    int iescolha;
    float fnum1 = 0;
    float fnum2 = 0;
    float fmedia = 0;
    float fmaior = 0;
    float fresul = 0;
    float fmult = 0;
    float fdivi = 0;

    cout << "Digite o primeiro numero:";
    cin >> fnum1;

    cout << "Digite o segundo numero:";
    cin >> fnum2;

    cout << "--------------------------------------\n";
    cout << "1-M�dia entre os n�meros digitados\n\n";
    cout << "2-Diferen�a do maior pelo menor\n\n";
    cout << "3-Produto entre os n�meros digitados\n\n";
    cout << "4-Divis�o do primeiro pelo segundo\n\n";
    cout << "---------------------------------------\n";

    cout << "Op��o: ";
        cin >> iescolha;

        switch (iescolha)
        {
        case 1:
            fmedia= (fnum1+fnum2)/2;
            cout << "\n O resultado �:"  << fmedia;
            break;

        case 2:
            if (fnum1>fnum2)
            {
                fmaior = fnum1;
                fresul = fmaior - fnum2;

                cout << "\n O resultado �:" << fresul;
                break;
            }
            else if (fnum1<fnum2)
            {
                fmaior = fnum2;
                fresul = fmaior - fnum1;

                cout << "\n O resultado �:" << fresul;
                break;

            }
        case 3:
            fmult = fnum1 * fnum2;
            cout << "\n O resultado �:" << fmult;
            break;

        case 4:
            fdivi = fnum1/fnum2;
            cout << "\n O resultado �:" << fdivi;
            break;

        default:
            cout << "\n N�mero inv�lido";

        }



    return 0;
}
