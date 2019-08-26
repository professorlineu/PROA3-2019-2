/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Laço de repetição - Programa que receba um número, calcule e mostre a tabuada desse número**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int itabuada = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite um Numero: ";
    cin >> itabuada;

    while (i <= 10)
    {
        cout << itabuada << " x " << i << "=" << i * itabuada << endl;

        i = i + 1;
    } // fim do while / laço


    return 0;
}
