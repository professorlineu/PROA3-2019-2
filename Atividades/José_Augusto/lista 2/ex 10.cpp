/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int lado=0;
    int resu=0;

    cout << "\nArea do quadrado";

    cout << "\nDigite um dos lados do quadrado:";
    cin >> lado;

    resu = lado * lado;

    cout << "\nA area do quarado e:" << resu;

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
