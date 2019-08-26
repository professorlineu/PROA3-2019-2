/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba um número, calcule e mostre a tabuada desse número.
Exemplo: Digite um número: 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int i = 0; //Declaração de variáveis
    int iValor = 0; //Declaração de variáveis
    int iMult = 0; //Declaração de variáveis

    setlocale(LC_ALL,""); //Configuração da tela de saída
    system("color F1"); // limpa a tela

    cout << "\nInsira o número que você deseja a tabuada ";
    cin >> iValor;

    while (i <=10) //Código do programa

    {
        cout << iValor << " x " << i << " = " << iMult << "\n";
        i = i + 1;

        iMult = i * iValor;


    } // fim do while / laço


    return 0;
}
