/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Exe.8 Reajusto de sal�rios
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


    cout << "Digite o seu sal�rio: ";    // Recebe o valor do sal�rio
    cin >> fSalario;

    if (fSalario < 300)
    {
        fSalarioReajus = fSalario * (1 + 0.35);
        cout << "Seu novo sal�rio ser� de: " << fSalarioReajus;
    }
    if (fSalario > 300)
    {
        fSalarioReajus = fSalario * (1 + 0.15);
        cout << "Seu novo sal�rio ser� de: " << fSalarioReajus;
    }


	return 0;
}

