/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 3 - EX.4
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
    float fNum3 = 0;
    float fMaior = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o 1� N�mero: ";
    cin >> fNum1;

    cout << "\nDigite o 2� N�mero: ";
    cin >> fNum2;

    cout << "\nDigite o 3� N�mero: ";
    cin >> fNum3;


    if (fNum1 >= fNum2)
    {
        fMaior = fNum1;
    }
    else
    {
        fMaior = fNum2;
    }
    if (fNum3 >= fMaior)
    {
        fMaior = fNum3;
    }

    cout << "\nO Maior N�mero �: " << fMaior << endl;


    return 0;
}
