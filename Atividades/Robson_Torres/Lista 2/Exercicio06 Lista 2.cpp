/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 06 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

           float  fsalario =0;

           float  fvendas  =0;

           float  fsalariofinal =0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\nsalariofixo: ";    // Recebe o valor do salari fixo
       cin >>fsalario;

        fsalariofinal = fsalario + (fvendas * 0.04) ;

cout << "\nsalario com comissao = " <<fsalariofinal;



    return 0;
}
