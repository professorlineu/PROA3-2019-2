/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float sala = 0 ;
    float salareceber = 0 ;
    float grati = 0 ;

    cout << " \ n Sal�rio do funcion�rio: " ;

    cin >> sala;

    grati = sala * 4 / 100 ;

    salareceber = sala + grati;

    cout << " \ n Sal�rio a receber : " << salareceber;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
