/**********************************************************
- Autor:     Livia Greccp
- Descri��o: Lista 2 - Exerc�cio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fLado = 0;
    float fArea = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o lado do quadrado: ";
    cin >> fLado;

    fArea = fLado * fLado;

    cout << "�rea do quadrado = " << fArea;

    return 0;
}
