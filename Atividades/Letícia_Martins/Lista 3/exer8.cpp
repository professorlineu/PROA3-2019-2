/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Exe.8 Reajusto de salários
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fSalario = 0,fSalarioReajus = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o seu salário: ";    // Recebe o valor do salário
    cin >> fSalario;

    if (fSalario < 300)
    {
        fSalarioReajus = fSalario * (1 + 0.35);
        cout << "Seu novo salário será de: " << fSalarioReajus;
    }
    if (fSalario > 300)
    {
        fSalarioReajus = fSalario * (1 + 0.15);
        cout << "Seu novo salário será de: " << fSalarioReajus;
    }


	return 0;
}

