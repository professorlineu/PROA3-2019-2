/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Exerc�cio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    setlocale(LC_ALL,"");
    system("color F1");

    float fsalario = 0;
    float fajuste = 0;

    cout << "Qual seu salario?";
    cin >> fsalario;

    if (fsalario < 500)
    {
        fajuste = fsalario + ( fsalario*30/100);
    }
    else
    {
        fajuste = fsalario;
    }
    cout << "\n Este � seu salario:" << fajuste;


    //Configura��o da tela de sa�da


    //C�digo do programa



    return 0;
}
