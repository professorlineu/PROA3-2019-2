/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 06 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

           float  fsalario =0;

           float  fvendas  =0;

           float  fsalariofinal =0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "\nsalariofixo: ";    // Recebe o valor do salari fixo
       cin >>fsalario;

        fsalariofinal = fsalario + (fvendas * 0.04) ;

cout << "\nsalario com comissao = " <<fsalariofinal;



    return 0;
}
