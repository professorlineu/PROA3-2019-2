/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: OR Lógico
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    char cLetra;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite uma letra: ";
    cin >> cLetra;

    if (cLetra == 'A' || cLetra == 'a')
    {
        cout << "\n>>> Você digitou a letra A ou a\n";
    }
    else
    {
        cout << "\n>>> Você NÃO digitou a letra A ou a\n";
    }
}
