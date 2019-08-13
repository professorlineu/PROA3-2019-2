/**********************************************************
- Autor:     Adriel Silveira
- Descrição: subtração de valores.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float Fvalor1 = 0;
    float Fvalor2 = 0;
    float fsoma = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nInsira valor 1: ";
    cin >> Fvalor1;

    cout << "\ninsira valor 2: ";
    cin >> Fvalor2 ;
    fsoma = Fvalor1 - Fvalor2;
cout << "\nresultado da subtração = " <<fsoma;

getch();

    return 0;
}
