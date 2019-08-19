/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Lista 2 - Exercício 5 - Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

      float fValor = 0;
      float fDesconto = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Valor do Produto = ";
    cin >> fValor;

    fDesconto = fValor - (fValor*0.1);

    cout << "Valor do Produto com 10% de desconto = " << fDesconto;

    return 0;
}
