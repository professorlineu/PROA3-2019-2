/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 4 - EX.20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int iEscolha = 0;
    int iValor1 = 0;
    int iValor2 = 0;
    int iValor3 = 0;
    int iMedArit = 0;
    float fMedPond = 0;
    float fPeso1 = 3;
    float fPeso2 = 3;
    float fPeso3 = 2;


    setlocale(LC_ALL,"");
    system("color F1");

    cout << "------------------------------------------";
    cout << "\n1. M�dia Aritm�tica " << endl;
    cout << "2. M�dia Ponderada " << endl;
    cout << "3. Sair " << endl;
    cout << "------------------------------------------" << endl;

    cout << "\nOp��o: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
        case 1 :
            cout << "\nInsira um valor >> ";
            cin >> iValor1;

            cout << "Insira um valor >> ";
            cin >> iValor2;

            iMedArit = (iValor1 + iValor2) / 2;

            cout << "\nA M�dia Aritm�tica � >> " << iMedArit << endl;
            break;
        case 2 :
            cout << "\nInsira um valor >> ";
            cin >> iValor1;

            cout << "Insira um valor >> ";
            cin >> iValor2;

            cout << "Insira um valor >> ";
            cin >> iValor3;

            fMedPond = ((iValor1 * fPeso1) + (iValor2 * fPeso2) + (iValor3 * fPeso3)) / (fPeso1 + fPeso2 + fPeso3);

            cout << "\nA M�dia Ponderada � >> " << fMedPond << endl;
            break;

        case 3 :
            cout << "\nObrigado pela prefer�ncia!! " << endl;
            break;
    }

    return 0;
}
