/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: AND L�gico [2]
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    float fMediaGlobal;
    int iFrequencia;

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
    else if (fMediaGlobal < 6.0 && iFrequencia >= 75)
    {
        cout << "\n>>> M�dia Global abaixo de 6\n";
    }
    else if (fMediaGlobal >= 6.0 && iFrequencia < 75)
    {
        cout << "\n>>> Frequ�ncia abaixo de 75%\n";
    }
    else
    {
        cout << "\n>>> M�dia Global e Frequ�ncia insuficiente\n";
    }
}
