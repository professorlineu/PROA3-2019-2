/*****************************************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 3 - Exercício 1 - Média global e verificação de aprovado ou reprovado
*****************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

main()
{
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fNota4 = 0;
    float fMediaGlobal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe a Primeira Nota: ";
    cin >> fNota1;

    cout << "Informe a Segunda Nota: ";
    cin >> fNota2;

    cout << "Informe a Terceira Nota: ";
    cin >> fNota3;

    cout << "Informe a Quarta Nota: ";
    cin >> fNota4;

    fMediaGlobal = (fNota1 + fNota2 + fNota3 + fNota4) / 4;


    if (fMediaGlobal >= 7.0)
    {
        cout << "\n>>> Aprovado\n";
    }
    else
    {
        cout << "\n>>> Reprovado\n";
    }
}
