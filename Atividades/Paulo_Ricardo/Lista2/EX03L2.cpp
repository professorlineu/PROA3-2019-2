/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Faça um programa que receba três números, calcule e mostre a multiplicação desses números
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    //Configuração da tela de saída
    int n1=0;
    int n2=0;
    int resu=0;

    cout << "\nDivisao";

    cout << "\nDigite um numero:";
    cin >> n1;

    cout << "\nDigite um numero que não seja 0:";
    cin >> n2;

    resu = n1/n2;

    cout << "\n = " << resu;

    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
