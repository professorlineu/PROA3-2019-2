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
    int n1=0;
    int n2=0;
    int resu=0;

    cout << "\nDivisao";

    cout << "\nDigite um numero:";
    cin >> n1;

    cout << "\nDigite um numero que não seja 0:";
    cin >> n2;

    resu = n1/n2;

    cout << "\n = " << resu;
    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
