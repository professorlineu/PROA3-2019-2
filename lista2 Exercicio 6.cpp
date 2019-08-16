/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 2 Exercicio 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

       float fsalario= 0;
       float fvendas = 0;
       float fsalariofinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\nsalario fixo: ";
    cin >> fsalario;

    cout<< "\ntotal de vendas: ";
    cin>> fvendas;

    fsalariofinal = fsalario+ (fvendas*0,04);
    cout<<" \n salario com comissao="<<fsalariofinal;


    return 0;
}
