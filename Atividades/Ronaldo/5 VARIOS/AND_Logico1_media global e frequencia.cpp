/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: AND Lógico [1]
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

    cout << "Informe a Média Global: ";
    cin >> fMediaGlobal;

    cout << "Informe a Frequência: ";
    cin >> iFrequencia;

    if (fMediaGlobal >= 6.0 && iFrequencia >= 75)
    {
        cout << "\n>>> Aprovado\n";
    }
    else
    {
        cout << "\n>>> Média Global e/ou Frequência insuficiente\n";
    }
}
