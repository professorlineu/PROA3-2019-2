/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Fa�a um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Declara��o de vari�veis
    int peso = 0 ;
    int resu = 0 ;

    cout << " \ n Digite seu peso: " ;
    cin >> peso;

    resu = peso * 1000 ;

    cout << " \ n " " Seu peso em gramas e: " << resu;




    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
