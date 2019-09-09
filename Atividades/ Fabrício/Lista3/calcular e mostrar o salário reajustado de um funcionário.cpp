/**********************************************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 3 - Exercício 8 - calcular e mostrar o salário reajustado de um funcionário
***********************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

main()
{
    float fSal = 0;
    float fSnovo = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o salário do funcionário: R$ ";
    cin >> fSal;

    if (fSal <= 300)
    {
        fSnovo = fSal + (fSal * 0.35);
        cout << endl;
        cout << "Salário com reajuste de 35%: R$" << fSnovo << endl;
    }

    else if (fSal > 300)
    {
        fSnovo = fSal + (fSal* 0.15);
        cout << endl;
        cout << "Salário com reajuste de 15%: R$" << fSnovo << endl;
    }


    return 0;
}
