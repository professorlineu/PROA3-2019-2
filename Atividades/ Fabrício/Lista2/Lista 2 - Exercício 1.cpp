/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 1
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
   float fResu = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro n�mero: ";
    cin >> fNum1;

    cout << "Digite o segundo n�mero: ";
    cin >> fNum2;

    fResu= fNum1 - fNum2;

    cout << "Resultado final:" << fResu;


    return 0;
}
