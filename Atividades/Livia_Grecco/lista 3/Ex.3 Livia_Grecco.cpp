/**********************************************************
- Autor:    Livia Grecco
- Descri��o: Lista 3 - Ex.3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNum1 = 0;
    float fNum2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Insira o n�mero 1: ";
    cin >> fNum1 ;

    cout << "Insira o n�mero 2: ";
    cin >> fNum2 ;


    if (fNum1 < fNum2)
    cout << "primeiro n�mero � menor  ";

    else
    cout << "segundo n�mero � menor  ";



    return 0;
}
