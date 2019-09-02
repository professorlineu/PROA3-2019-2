/**************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 3 - Exercício 3 - Menor numero de 2 numeros
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

    cout << "Informe a Primeiro Número: ";
    cin >> fNume1;

    cout << "Informe a Segundo Número: ";
    cin >> fNume2;


    if (fNume1 > fNume2)
    {
        cout << endl;
        cout << "Menor número é:" << fNume2 << endl;
    }

    else if (fNume1 < fNume2)
    {
        cout << endl;
        cout << "Menor número é:" << fNume1 << endl;
    }

    else if (fNume1 = fNume2)
    {
        cout << endl;
        cout << "São iguais! Não há número menor!" << endl;
    }


    return 0;
}
