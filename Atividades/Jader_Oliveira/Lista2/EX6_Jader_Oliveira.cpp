/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX6 - salario, vendas e comissão
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fSal = 0;
    float fComis = 0;
    float fVenda = 0;
    float fSalFin = 0;

    cout << "informe o seu salario fixo: ";
    cin >> fSal;

    cout << "informe o valor das vendas: ";
    cin >> fVenda;

    fComis = fVenda * 0.4;

    cout << "sua comissao e de: " << fComis << endl;

    fSalFin = fSal + fComis;

    cout << "seu salario final e: " << fSalFin;
}
