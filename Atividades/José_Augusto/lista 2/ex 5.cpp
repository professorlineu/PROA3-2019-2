/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: porcentagem 10%
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

    cout << "\nDigite o pre�o do produto:";

    cin >> preco;

    desconto = preco * 10/100;

    novopreco = preco - desconto;

    cout <<"\nNovo Pre�o =" << novopreco;

    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
