/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float preco = 0 ;
    float desconto = 0 ;
    float atualpreco = 0 ;

    cout << " \ n Digite o preço do produto: " ;

    cin >> preco;

    desconto = preco * 10 / 100 ;

    atualpreco = preco - desconto;

    cout << " \ n Novo Preço = " << atualpreco;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
