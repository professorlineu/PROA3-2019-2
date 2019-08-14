/**********************************************************
- Autor:     Caue Gabriel
- Descrição: Lista 2 - Exercicio 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNumero01 = 0;
    int iNumero02 = 0;
    int iNumero03 = 0;
    int iResultado = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1° número: "; cin >> iNumero01;

    cout << "Digite o 2° número: "; cin >> iNumero02;

    cout << "Digite o 3° número: "; cin >> iNumero03;

    iResultado = iNumero01 * iNumero02 * iNumero03;

    cout << "Resposta:  " << iResultado;


    return 0;
}
