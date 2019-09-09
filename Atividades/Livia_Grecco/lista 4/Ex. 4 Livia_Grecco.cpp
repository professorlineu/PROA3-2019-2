/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 4 - Ex. 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declaração de variáveis
   int i = 0;
   int iTab = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa
    cout << "Digite um valor:  ";
    cin >> iTab;

    while (i <= 10)
    {
    cout << iTab << "x" << i << "=" << i * iTab << endl;

    i++;

    } // fim do while


    return 0;
}
