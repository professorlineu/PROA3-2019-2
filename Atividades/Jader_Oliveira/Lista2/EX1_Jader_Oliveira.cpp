/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //declaração de variáveis
    int iAnoAtual = 0;
    int iAnoNasc = 0;
    int iResultado = 0;

    setlocale(LC_ALL,"");
    system("color F3");

    //codigo do programa
    cout << "digite o ano atual: ";
    cin >> iAnoAtual;

    cout << "informe a data de nascimento: ";
    cin >> iAnoNasc;

    iResultado = iAnoAtual - iAnoNasc;

    cout << "Resultado = " << iResultado;

}

