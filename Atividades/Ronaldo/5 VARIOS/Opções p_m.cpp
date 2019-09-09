/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Comando switch com caracteres
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
    cout << "P - Programação\n\n";
    cout << "M - Matemática\n\n";
    cout << "* - Sair\n\n";
    cout << "----------------------------------------\n\n";

    cout << "Opção: ";
    cin >> cEscolha;

    switch( toupper(cEscolha) )
    {
        case 'P':
            cout << "Você escolheu Programação!\n";
            break;
        case 'M':
            cout << "Você escolheu Matemática!\n";
            break;
        case '*':
            cout << "Obrigado pela preferência!\n";
            break;
        default:
            cout << "Valor Inválido!\n";
    }
}
