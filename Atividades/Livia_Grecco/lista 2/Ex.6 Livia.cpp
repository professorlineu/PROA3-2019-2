/**********************************************************
- Autor:     Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

      float fSalario = 0;
      float fComissao = 0;
      float fVendas = 0;
      float fSalFinal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Valor do sal�rio fixo: ";
    cin >> fSalario;

    cout << "Valor das vendas: ";
    cin >> fVendas;

    fComissao = fVendas *0.4;

    cout << "Valor da comiss�o: " << fComissao << endl;

    fSalFinal = fComissao + fSalario;

    cout << "Valor do sal�rio final: "  << fSalFinal;

    return 0;
}
