/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Exe.7 Aumento de sal�rios inferiores a tal valor
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


    cout << "Digite o seu sal�rio: ";    // Recebe o valor do sal�rio
    cin >> fSalario;

    if (fSalario < 500)
    {
        fSalarioReajus = fSalario * (1 + 0.3);
        cout << "Seu novo sal�rio ser� de: " << fSalarioReajus;
    }

    else
    {
        cout << "Seu sal�rio n�o ter� reajuste.";
    }

	return 0;
}

