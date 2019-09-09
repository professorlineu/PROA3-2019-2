/*****************************************************************************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 3 - Exerc�cio 11 - calcular e mostrar o sal�rio reajustado de um funcion�rio - 0%,5%,10% e 15%
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

    cout << "Informe o sal�rio do funcion�rio: R$ ";
    cin >> fSal;

    if (fSal <= 300)
    {
        fSnovo = fSal + (fSal * 0.15);
        cout << endl;
        cout << "Sal�rio com reajuste de 15%: R$" << fSnovo << endl;
    }

    else if (fSal >= 301 && fSal <= 599.99)
    {
        fSnovo = fSal + (fSal* 0.10);
        cout << endl;
        cout << "Sal�rio com reajuste de 10%: R$" << fSnovo << endl;
    }

    else if (fSal >= 600 && fSal <= 900)
    {
        fSnovo = fSal + (fSal* 0.05);
        cout << endl;
        cout << "Sal�rio com reajuste de 5%: R$" << fSnovo << endl;
    }

    else if (fSal >= 901)
    {
        fSnovo = fSal;
        cout << endl;
        cout << "Sal�rio N�O teve reajuste: R$" << fSnovo << endl;
    }


    return 0;
}
