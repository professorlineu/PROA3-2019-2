/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - EX.3
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

    cout << "Digite o 1� N�mero: ";
    cin >> fNum1;

    cout << "\nDigite o 2� N�mero: ";
    cin >> fNum2;

    if (fNum1 > fNum2)
    {
        cout << "\n<2� N�mero � o menor>\n";
    }
    else
    {
        cout << "\n<1� N�mero � o menor>\n" << endl;
    }



    return 0;
}
