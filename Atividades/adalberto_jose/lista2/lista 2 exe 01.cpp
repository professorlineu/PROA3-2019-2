/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 2 Exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iAnoAtual = 0;
    int iAnoNasc = 0;
    int iResultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o ano atual: ";
    cin >> iAnoAtual;

    cout << "Digite o ano de nascimento: ";
    cin >> iAnoNasc;

    iResultado = iAnoAtual - iAnoNasc;

    cout << "Sua idade é: " << iResultado;


    return 0;
}
