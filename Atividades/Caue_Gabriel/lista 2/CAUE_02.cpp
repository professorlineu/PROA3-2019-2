/**********************************************************
- Autor:     Caue Gabriel
- Descri��o: Lista 2 - Exercicio 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iNumero01 = 0;
    int iNumero02 = 0;
    int iNumero03 = 0;
    int iResultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o 1� n�mero: "; cin >> iNumero01;

    cout << "Digite o 2� n�mero: "; cin >> iNumero02;

    cout << "Digite o 3� n�mero: "; cin >> iNumero03;

    iResultado = iNumero01 * iNumero02 * iNumero03;

    cout << "Resposta:  " << iResultado;


    return 0;
}
