/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 4 - Ex. 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declara��o de vari�veis
   int i = 0;
   int iTab = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa
    cout << "Digite um valor:  ";
    cin >> iTab;

    while (i <= 10)
    {
    cout << iTab << "x" << i << "=" << i * iTab << endl;

    i++;

    } // fim do while


    return 0;
}
