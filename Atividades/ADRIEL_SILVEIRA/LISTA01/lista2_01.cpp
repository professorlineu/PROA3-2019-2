/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: subtra��o de valores.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float Fvalor1 = 0;
    float Fvalor2 = 0;
    float fsoma = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nInsira valor 1: ";
    cin >> Fvalor1;

    cout << "\ninsira valor 2: ";
    cin >> Fvalor2 ;
    fsoma = Fvalor1 - Fvalor2;
cout << "\nresultado da subtra��o = " <<fsoma;

getch();

    return 0;
}
