/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 3 - Ex. 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNum1 = 0;
    float fNum2 = 0;
    float fNum3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Insira o n�mero 1: ";
    cin >> fNum1;

    cout << "Insira o n�mero 2: ";
    cin >> fNum2;

    cout << "Insira o n�mero 3: ";
    cin >> fNum3;

    if (fNum1 > fNum2 && fNum1 > fNum3)
    cout << " o primeiro n�mero � maior";

    else if (fNum2 > fNum3 && fNum2 > fNum1)
    cout << "o segundo n�mero � maior";

    else
    cout << "o terceiro n�mero � maior";



    getch();

    return 0;
}
