/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1=0;
    float fnum2=0;
    float fnum3=0;
    float fmaior=0;

    cout << "Digite o primeiro numero";
    cin >> fnum1;

    cout << "Digite o segundo numero";
    cin >> fnum2;

    cout << "Digite o terceiro numero";
    cin >> fnum3;

    if (fnum1>=fmaior)
    {
        fmaior=fnum1 ;
    }
    else
    {
        fmaior=fnum2 ;
    }

    if (fnum3>=fmaior)
    {
        fmaior=fnum3;
    }
    cout << "\n O numero maior: " << fmaior;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
