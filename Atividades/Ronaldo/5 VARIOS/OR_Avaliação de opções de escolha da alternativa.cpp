/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: OR L�gico
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
        cout << "\n>>> Voc� digitou a letra A ou a\n";
    }
    else
    {
        cout << "\n>>> Voc� N�O digitou a letra A ou a\n";
    }
}
