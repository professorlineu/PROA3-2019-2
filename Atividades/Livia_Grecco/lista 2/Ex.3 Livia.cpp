/**********************************************************
- Autor:     Livia Grecco
- Descri��o: Lista 2 - Exerc�cio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

        int iNumero1  =  0;
        int iNumero2  =  0;
        int iResultado = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o primeiro n�mero: ";
    cin  >> iNumero1;

    cout << "Digite o segundo n�mero: ";
    cin  >> iNumero2;

    iResultado  = iNumero1  /  iNumero2;

    cout << "Resultado = "  <<  iResultado;

    return 0;
}
