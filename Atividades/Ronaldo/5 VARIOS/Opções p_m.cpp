/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Comando switch com caracteres
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h> // comando toupper ou tolower
using namespace std;

main()
{
    char cEscolha;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "----------------------------------------\n\n";
    cout << "P - Programa��o\n\n";
    cout << "M - Matem�tica\n\n";
    cout << "* - Sair\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> cEscolha;

    switch( toupper(cEscolha) )
    {
        case 'P':
            cout << "Voc� escolheu Programa��o!\n";
            break;
        case 'M':
            cout << "Voc� escolheu Matem�tica!\n";
            break;
        case '*':
            cout << "Obrigado pela prefer�ncia!\n";
            break;
        default:
            cout << "Valor Inv�lido!\n";
    }
}
