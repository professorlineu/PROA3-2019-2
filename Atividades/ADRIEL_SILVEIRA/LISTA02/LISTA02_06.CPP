/**********************************************************
- Autor:     Adriel Silveira
- Descrição: caculo de vendas com salario fixo + comissao de vendas de 4%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fsalario = 0;

    float fvendas = 0;

    float fsalariofinal = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nsalario fixo: ";
    cin >> fsalario;

cout << " \ntotal de vendas: ";
    cin >> fvendas;



    fsalariofinal = fsalario + (fvendas * 0.04) ;

cout << "\nsalario com comissao = " <<fsalariofinal;

getch();

    return 0;
}

