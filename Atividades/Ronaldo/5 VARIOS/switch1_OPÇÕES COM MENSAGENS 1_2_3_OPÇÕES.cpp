/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Comando switch com números
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
    cout << "1 - Programação\n\n";
    cout << "2 - Matemática\n\n";
    cout << "3 - Sair\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch(iEscolha)
    {
        case 1:
            cout << "Você escolheu Programação!\n";
            break;
        case 2:
            cout << "Você escolheu Matemática!\n";
            break;
        case 3:
            cout << "Obrigado pela preferência!\n";
            break;
        default:
            cout << "Valor Inválido!\n";
    }
}
