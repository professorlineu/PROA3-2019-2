/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 10 - Quantos salarios minimos recebe
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
   float fSmini = 0;
   float fSfunc = 0;
   float fQuant = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do salário minimo: R$ ";
    cin >> fSmini;

    cout << "Digite o valor do salário que recebe: R$ ";
    cin >> fSfunc;

    cout << endl;

    fQuant= fSfunc / fSmini;

    cout << "Quantidade de salários minimos que recebe:" << fQuant << endl;


    return 0;
}
