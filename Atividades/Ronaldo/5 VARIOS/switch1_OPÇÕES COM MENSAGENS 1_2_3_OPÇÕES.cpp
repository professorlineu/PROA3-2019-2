/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Comando switch com n�meros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int iEscolha;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "----------------------------------------\n\n";
    cout << "1 - Programa��o\n\n";
    cout << "2 - Matem�tica\n\n";
    cout << "3 - Sair\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:
            cout << "Voc� escolheu Programa��o!\n";
            break;
        case 2:
            cout << "Voc� escolheu Matem�tica!\n";
            break;
        case 3:
            cout << "Obrigado pela prefer�ncia!\n";
            break;
        default:
            cout << "Valor Inv�lido!\n";
    }
}
