/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: divisao de valores com o denominador diferente de "zero"
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fvalor1 = 0;
    float fvalor2 = 0;

    float fmultiplica = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nInsira valor 1: ";
    cin >> fvalor1;

cout << " \nInsira valor 2: ";
    cin >> fvalor2;



    fmultiplica = fvalor1 / fvalor2 ;
cout << "\nresultado da divis�o = " <<fmultiplica;

getch();

    return 0;
}
