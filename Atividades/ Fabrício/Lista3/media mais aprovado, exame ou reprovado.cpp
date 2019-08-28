/************************************************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 3 - Exercício 2 - Média global e verificação de aprovado, exame ou reprovado
************************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

main()
{
    float fNota1 = 0;
    float fNota2 = 0;
    float fMedia = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe a Primeira Nota: ";
    cin >> fNota1;

    cout << "Informe a Segunda Nota: ";
    cin >> fNota2;

    fMedia = (fNota1 + fNota2) / 2;

    if (fMedia >= 7.0 && fMedia < 10.0)
    {
        cout << "\n>>> Aprovado\n";
    }

    else if (fMedia >= 3.0 && fMedia < 7.0)
    {
        cout << "\n>>> Exame\n";
    }

    else if (fMedia >= 0.0 && fMedia < 3.0)
    {
        cout << "\n>>> Reprovado\n";
    }


    return 0;
}
