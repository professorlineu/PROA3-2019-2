/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: AND Lógico [2]
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

    cout << "Informe a Média Global: ";
    cin >> fMediaGlobal;

    cout << "Informe a Frequência: ";
    cin >> iFrequencia;

    if (fMediaGlobal >= 6.0 && iFrequencia >= 75)
    {
        cout << "\n>>> Aprovado\n";
    }
    else if (fMediaGlobal < 6.0 && iFrequencia >= 75)
    {
        cout << "\n>>> Média Global abaixo de 6\n";
    }
    else if (fMediaGlobal >= 6.0 && iFrequencia < 75)
    {
        cout << "\n>>> Frequência abaixo de 75%\n";
    }
    else
    {
        cout << "\n>>> Média Global e Frequência insuficiente\n";
    }
}
