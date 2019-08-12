/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Calculo com porcentagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fVal = 0;
    float fVa2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor do salário : ";
    cin >> fVal;
    cout << "Digite o valor da comissão : ";
    cin >> fVa2;

    cout << "Comissão 4%: " << fVa2 * 1.04 << endl;
    cout << "Salário total : " << fVal + (fVa2 * 0.1) << endl;

    return 0;
}
