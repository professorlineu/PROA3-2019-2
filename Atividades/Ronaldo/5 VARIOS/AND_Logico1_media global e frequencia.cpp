/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: AND L�gico [1]
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    float fMediaGlobal = 0;
    int iFrequencia = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe a M�dia Global: ";
    cin >> fMediaGlobal;

    cout << "Informe a Frequ�ncia: ";
    cin >> iFrequencia;

    if (fMediaGlobal >= 6.0 && iFrequencia >= 75)
    {
        cout << "\n>>> Aprovado\n";
    }
    else
    {
        cout << "\n>>> M�dia Global e/ou Frequ�ncia insuficiente\n";
    }
}
