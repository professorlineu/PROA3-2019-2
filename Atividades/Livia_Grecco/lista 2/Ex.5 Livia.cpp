/**********************************************************
- Autor:     Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

      float fValor = 0;
      float fDesconto = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Valor do Produto = ";
    cin >> fValor;

    fDesconto = fValor - (fValor*0.1);

    cout << "Valor do Produto com 10% de desconto = " << fDesconto;

    return 0;
}
