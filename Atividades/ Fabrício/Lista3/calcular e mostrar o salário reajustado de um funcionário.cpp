/**********************************************************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 3 - Exerc�cio 8 - calcular e mostrar o sal�rio reajustado de um funcion�rio
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

    cout << "Informe o sal�rio do funcion�rio: R$ ";
    cin >> fSal;

    if (fSal <= 300)
    {
        fSnovo = fSal + (fSal * 0.35);
        cout << endl;
        cout << "Sal�rio com reajuste de 35%: R$" << fSnovo << endl;
    }

    else if (fSal > 300)
    {
        fSnovo = fSal + (fSal* 0.15);
        cout << endl;
        cout << "Sal�rio com reajuste de 15%: R$" << fSnovo << endl;
    }


    return 0;
}
