/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 3 exer.04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fnum01 = 0;
    float fnum02 = 0;
    float fnum03 = 0;
    float fMaior = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o 1� N�mero: ";
    cin >> fnum01;

    cout << "\nDigite o 2� N�mero: ";
    cin >> fnum02;

    cout << "\nDigite o 3� N�mero: ";
    cin >> fnum03;


    if (fnum01 >= fnum02)
    {
        fMaior = fnum01;
    }
    else
    {
        fMaior = fnum02;
    }
    if (fnum03 >= fMaior)
    {
        fMaior = fnum03;
    }

    cout << "\nO Maior N�mero �: " << fMaior << endl;


    return 0;
}
