/**********************************************************
- Autor:     José Augusto
- Descrição: conversão de peso p/ grama
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int peso=0;
    int resu=0;

    cout <<"\nDigite seu peso:";
    cin >> peso;

    resu = peso * 1000;

    cout << "\nSeu peso em gramas e:" << resu;


    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
