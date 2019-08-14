/**********************************************************
- Autor:     José Augusto
- Descrição: porcentagem 10%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float preco=0;
    float desconto=0;
    float novopreco=0;

    cout << "\nDigite o preço do produto:";

    cin >> preco;

    desconto = preco * 10/100;

    novopreco = preco - desconto;

    cout <<"\nNovo Preço =" << novopreco;

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
