/*******************************************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 10 - Quantos salarios minimos recebe e sobras
********************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
   int  iSmini = 0;
   int  iSfunc = 0;
   int  iQuant = 0;
   int iQuant1 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do salário minimo: R$ ";
    cin >> iSmini;

    cout << "Digite o valor do salário que recebe: R$ ";
    cin >> iSfunc;

    cout << endl;

    iQuant  = iSfunc / iSmini;
    iQuant1  = iSfunc % iSmini;

    cout << "Quantidade de salários minimos que recebe: " << iQuant << endl;
    cout << endl;
    cout << "Valor da sobra: R$ " << iQuant1  << endl;


    return 0;
}
