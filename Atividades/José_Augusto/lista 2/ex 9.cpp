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
    int baseM=0;
    int basem=0;
    int alt=0;
    int resu=0;

    cout <<"\nArea do Trapesio";

    cout << "\nDigite a base maior do trapezio:";
    cin >> baseM;

    cout << "\nDigite a base menor do trapezio:";
    cin >> basem;

    cout << "\nDigite a altura:";
    cin >> alt;

    resu = (( baseM + basem) * alt)/2;

    cout << "\nA area do trapezio e:" << resu;




    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
