/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float preco = 0 ;
    float desconto = 0 ;
    float atualpreco = 0 ;

    cout << " \ n Digite o pre�o do produto: " ;

    cin >> preco;

    desconto = preco * 10 / 100 ;

    atualpreco = preco - desconto;

    cout << " \ n Novo Pre�o = " << atualpreco;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
