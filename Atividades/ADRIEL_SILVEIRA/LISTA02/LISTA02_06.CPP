/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: caculo de vendas com salario fixo + comissao de vendas de 4%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fsalario = 0;

    float fvendas = 0;

    float fsalariofinal = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nsalario fixo: ";
    cin >> fsalario;

cout << " \ntotal de vendas: ";
    cin >> fvendas;



    fsalariofinal = fsalario + (fvendas * 0.04) ;

cout << "\nsalario com comissao = " <<fsalariofinal;

getch();

    return 0;
}

