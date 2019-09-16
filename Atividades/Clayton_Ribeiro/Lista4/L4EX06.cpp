/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 06
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    char cTrans = 0;
    float fValor = 0;
    float fTotalV = 0, fTotalP = 0;
    float fTotal = 0;
    float fParcela = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 15)
    {
        cout << "\nTransação à vista = V";
        cout << "\nTransação a prazo = P";
        cout << "\nInsira o código desejado: ";
        cin >> cTrans;
        cTrans = toupper (cTrans);

        cout << "\nDigite o valor da transação: ";
        cin >> fValor;

        if (cTrans == 'V' || cTrans == 'P')
        {
            fTotal += fValor;

            if (cTrans == 'V')
            {
                fTotalV += fValor;
            }

            else
            {
                fTotalP += fValor;
            }
        }

        else
        {
            cout << "Código digitado inválido.";
        }

        i++;

    }       //Fim do while

    cout << "\nO valor total das compras à vista: " << fTotalV << endl;
    cout << "O valor total das compras a prazo: " << fTotalP << endl;
    cout << "O valor total das compras efetuadas: " << fTotal << endl;

    fParcela = fTotalP / 3;

    cout << "O valor da primeira prestação das compras a prazo juntas (*): " << fParcela << endl;
    cout << "(*) Sabendo-se que serão pagas em três vezes.";

	return 0;
}
