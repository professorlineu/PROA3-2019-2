/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 09
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fSaldoMed = 0, fCredit = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o seu saldo médio do último ano: ";    // Recebe o valor do saldo médio do último ano
    cin >> fSaldoMed;

    if (fSaldoMed > 400)
    {
        fCredit = fSaldoMed * (0.3);
        cout << "\nSaldo médio de: " << fSaldoMed <<endl;
        cout << "Valor do crédito: " << fCredit;
    }


    else if (fSaldoMed <= 400 && fSaldoMed > 300)
    {
        fCredit = fSaldoMed * (0.25);
        cout << "\nSaldo médio de: " << fSaldoMed <<endl;
        cout << "Valor do crédito: " << fCredit;
    }


    else if (fSaldoMed <= 300 && fSaldoMed > 200)
    {
        fCredit = fSaldoMed * (0.2);
        cout << "\nSaldo médio de: " << fSaldoMed <<endl;
        cout << "Valor do crédito: " << fCredit;
    }

    else
    {
        fCredit = fSaldoMed * (0.1);
        cout << "\nSaldo médio de: " << fSaldoMed <<endl;
        cout << "Valor do crédito: " << fCredit;
    }

	return 0;
}
