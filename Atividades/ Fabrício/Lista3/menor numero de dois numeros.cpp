/**************************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 3 - Exerc�cio 3 - Menor numero de 2 numeros
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

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe a Primeiro N�mero: ";
    cin >> fNume1;

    cout << "Informe a Segundo N�mero: ";
    cin >> fNume2;


    if (fNume1 > fNume2)
    {
        cout << endl;
        cout << "Menor n�mero �:" << fNume2 << endl;
    }

    else if (fNume1 < fNume2)
    {
        cout << endl;
        cout << "Menor n�mero �:" << fNume1 << endl;
    }

    else if (fNume1 = fNume2)
    {
        cout << endl;
        cout << "S�o iguais! N�o h� n�mero menor!" << endl;
    }


    return 0;
}
