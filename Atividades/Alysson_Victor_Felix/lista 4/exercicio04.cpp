/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição:    Exercicio proposto 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int ivalor = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor desejado: ";
    cin >> ivalor;

    while (i < 10)
    {

        i = i + 1;

        cout << ivalor << "x" << i << "=" << i * ivalor << endl;

    } // fim do while / laço





    return 0;
}
