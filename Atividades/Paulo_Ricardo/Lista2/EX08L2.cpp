/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Declaração de variáveis
    int peso = 0 ;
    int resu = 0 ;

    cout << " \ n Digite seu peso: " ;
    cin >> peso;

    resu = peso * 1000 ;

    cout << " \ n " " Seu peso em gramas e: " << resu;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
