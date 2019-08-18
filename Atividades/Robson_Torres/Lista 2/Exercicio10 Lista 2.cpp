/**********************************************************
- Autor:     Robson Torres
- Descrição: Exercicio 10 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

           float fLado1 = 0;

           float fLado2 = 0;

           float fArea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o lado 1:  ";
    cin >> fLado1;

    cout << "Digite o lado 2:  ";
    cin >> fLado2;

    fArea = fLado1 * fLado2;

    cout << "Area do Quadrado é:  " << fArea << endl;

    return 0;
}
