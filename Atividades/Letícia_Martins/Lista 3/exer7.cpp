/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Exe.7 Aumento de salários inferiores a tal valor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fSalario = 0, fSalarioReajus = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o seu salário: ";    // Recebe o valor do salário
    cin >> fSalario;

    if (fSalario < 500)
    {
        fSalarioReajus = fSalario * (1 + 0.3);
        cout << "Seu novo salário será de: " << fSalarioReajus;
    }

    else
    {
        cout << "Seu salário não terá reajuste.";
    }

	return 0;
}

