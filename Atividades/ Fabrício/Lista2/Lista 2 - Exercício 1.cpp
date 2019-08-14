/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
   float fNum1 = 0;
   float fNum2 = 0;
   float fResu = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número: ";
    cin >> fNum1;

    cout << "Digite o segundo número: ";
    cin >> fNum2;

    fResu= fNum1 - fNum2;

    cout << "Resultado final:" << fResu;


    return 0;
}
