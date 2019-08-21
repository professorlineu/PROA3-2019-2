/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 5 - Calcula o salário mais porcentagem em cima das vendas
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declaração de variáveis
   float fSala = 0;
   float fVend = 0;
   float fComi = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do salário:R$ ";
    cin >> fSala;

    cout << "Digite o valor das vendas:R$ ";
    cin >> fVend;

    fComi = fVend * 0.04;

    cout << "Valor da comissão de 4%:R$ " << fComi << endl;

    cout << "Valor do salário final (salário + comissão):R$ " << fComi + fSala;


    return 0;
}
