/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 05 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

       double  d_preco = 0, d_precoDesc = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o preço do produto: ";    // Recebe o valor do produto
    cin >> d_preco;

     d_precoDesc = d_preco * ( 1 - 0.1 ); //Calcula o valor do preço com 10% de desconto


    cout << "\n0 preço com desconto de 10%e:"  << d_precoDesc;



    return 0;
}

