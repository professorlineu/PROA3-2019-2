/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 2 Exercicio 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

       float fsalario= 0;
       float fvendas = 0;
       float fsalariofinal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\nsalario fixo: ";
    cin >> fsalario;

    cout<< "\ntotal de vendas: ";
    cin>> fvendas;

    fsalariofinal = fsalario+ (fvendas*0,04);
    cout<<" \n salario com comissao="<<fsalariofinal;


    return 0;
}
