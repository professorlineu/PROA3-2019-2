/*****************************************************************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 3 - Exercício 11 - calcular e mostrar o salário reajustado de um funcionário - 0%,5%,10% e 15%
******************************************************************************************************************/

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

    if (fSal <= 299.99999)
    {
        fSnovo = fSal + (fSal * 0.15);
        cout << endl;
        cout << "Salário com reajuste de 15%: R$" << fSnovo << endl;
    }

    else if (fSal >= 300 && fSal <= 599.99999)
    {
        fSnovo = fSal + (fSal* 0.10);
        cout << endl;
        cout << "Salário com reajuste de 10%: R$" << fSnovo << endl;
    }

    else if (fSal >= 600 && fSal <= 899.99999)
    {
        fSnovo = fSal + (fSal* 0.05);
        cout << endl;
        cout << "Salário com reajuste de 5%: R$" << fSnovo << endl;
    }

    else if (fSal >= 900)
    {
        fSnovo = fSal;
        cout << endl;
        cout << "Salário NÂO teve reajuste: R$" << fSnovo << endl;
    }


    return 0;
}
