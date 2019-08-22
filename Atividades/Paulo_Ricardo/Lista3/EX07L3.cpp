/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Exercício 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
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
    cout << "\n Este é seu salario:" << fajuste;


    //Configuração da tela de saída


    //Código do programa



    return 0;
}
