/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: Calculo da area do quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float flado1 = 0;


    float flado2 = 0;

    float farea = 0 ;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nInsira o valor do lado 1: ";
    cin >> flado1;

    cout << " \nInsira o valor do lado 2: ";
    cin >> flado2;


    farea = flado1 * flado2 ;



    cout << "\n area do quadrado �: " <<farea;

    getch();

    return 0;
}

