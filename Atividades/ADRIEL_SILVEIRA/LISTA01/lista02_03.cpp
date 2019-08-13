/**********************************************************
- Autor:     Adriel Silveira
- Descrição: divisao de valores com o denominador diferente de "zero"
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fvalor1 = 0;
    float fvalor2 = 0;

    float fmultiplica = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nInsira valor 1: ";
    cin >> fvalor1;

cout << " \nInsira valor 2: ";
    cin >> fvalor2;



    fmultiplica = fvalor1 / fvalor2 ;
cout << "\nresultado da divisão = " <<fmultiplica;

getch();

    return 0;
}
