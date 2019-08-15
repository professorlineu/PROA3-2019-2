/**********************************************************
- Autor:     Livia Grecco
- Descrição: Lista 2 - Exercício 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

      float fSalario = 0;
      float fComissao = 0;
      float fVendas = 0;
      float fSalFinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Valor do salário fixo: ";
    cin >> fSalario;

    cout << "Valor das vendas: ";
    cin >> fVendas;

    fComissao = fVendas *0.4;

    cout << "Valor da comissão: " << fComissao << endl;

    fSalFinal = fComissao + fSalario;

    cout << "Valor do salário final: "  << fSalFinal;

    return 0;
}
