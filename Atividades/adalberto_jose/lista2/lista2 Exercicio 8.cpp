/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 2 Exercicio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

       float fpeso0 = 0;
       float fgrama = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Quantos quilos você pesa: ";
    cin >> fpeso0;

    fgrama = fpeso0 * 1000;


    cout<<"\nSeu peso em grama é; "<<fgrama;

    return 0;
}
