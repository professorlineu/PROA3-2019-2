/**************************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 3 - Exerc�cio 4 - Maior numero de 3 numeros
**************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

main()
{
    float fNume1 = 0;
    float fNume2 = 0;
    float fNume3 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe a Primeiro N�mero: ";
    cin >> fNume1;

        cout << "Informe a Segundo N�mero: ";
        cin >> fNume2;

            cout << "Informe a Terceiro N�mero: ";
            cin >> fNume3;


    if (fNume1 > fNume2 && fNume1 > fNume3)
    {
        cout << endl;
        cout << "Maior n�mero �:" << fNume1 << endl;
        }

        else if (fNume2 > fNume1 && fNume2 > fNume3)
        {
            cout << endl;
            cout << "Maior n�mero �:" << fNume2 << endl;
            }

            else if (fNume3 > fNume1 && fNume3 > fNume2)
            {
                cout << endl;
                cout << "Maior n�mero �:" << fNume3 << endl;
                }

                else if (fNume1 = fNume2 = fNume3)
                {
                    cout << endl;
                    cout << "S�o IGUAIS! N�o h� n�mero MAIOR!" << endl;
                    }


    return 0;
}
