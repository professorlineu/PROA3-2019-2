/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 2 - EX.11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fCat1 = 0;
    float fCat2 = 0;
    float fHip = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\nInforme o cateto 1: ";
    cin >> fCat1;

    cout << "\nInforme o cateto 2: ";
    cin >> fCat2;

    fHip = (fCat1 * fCat1) + (fCat2 + fCat2);

    cout << "Hipotenusa �: " << sqrt(fHip) << endl;



    return 0;
}
