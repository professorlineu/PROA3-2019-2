/**********************************************************
- Autor:     Livia Greccp
- Descri��o: Lista 2 - Exerc�cio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fQuilo = 0;
    float fGramas = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite seu peso em kg: ";
    cin >> fQuilo;

    fGramas = fQuilo * 1000;

    cout << "Seu peso em gramas: " << fGramas;


    return 0;
}
