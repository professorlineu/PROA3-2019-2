/**********************************************************
- Autor:     Adriel Silveira
- Descrição: Calculo da area do quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float flado1 = 0;


    float flado2 = 0;

    float farea = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nInsira o valor do lado 1: ";
    cin >> flado1;

    cout << " \nInsira o valor do lado 2: ";
    cin >> flado2;


    farea = flado1 * flado2 ;



    cout << "\n area do quadrado é: " <<farea;

    getch();

    return 0;
}

