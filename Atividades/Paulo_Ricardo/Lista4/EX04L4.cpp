/**********************************************************
- Autor:     Paulo Ricardo da Silva
- Descrição: Exercício
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
    int imult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "\n Insira o valor:";
    cin >> ivalor;

    while (i <= 10)
    {
        cout << ivalor << "x" <<i<< " = " << imult << endl;

        i = i + 1;

        imult = i * ivalor;
    } // fim do while / laço


    return 0;
}
