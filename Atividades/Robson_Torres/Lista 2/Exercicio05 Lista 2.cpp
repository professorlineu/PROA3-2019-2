/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 05 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

       double  d_preco = 0, d_precoDesc = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o pre�o do produto: ";    // Recebe o valor do produto
    cin >> d_preco;

     d_precoDesc = d_preco * ( 1 - 0.1 ); //Calcula o valor do pre�o com 10% de desconto


    cout << "\n0 pre�o com desconto de 10%e:"  << d_precoDesc;



    return 0;
}

