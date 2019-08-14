/**********************************************************
- Autor:     Caue Gabriel
- Descrição: Lista 2 - Exercicio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iNumero01 = 0;
    int iNumero02 = 1;
    int iResultado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o valor do 1° número:  ";
    cin >> iNumero01;

    cout << "Digite o valor do 2° número:  ";
    cin >> iNumero02;

    iResultado = iNumero01 / iNumero02;

    cout << " Resultado:  " << iResultado;



    return 0;
}
