/**********************************************************
- Autor:     N�riton
- Descri��o: Lista 2 exercicio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float fvalor1 = 0 ;
float fvalor = 0 ;

float fmultiplica = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    //Declara��o de vari�veis
    int iNumero01 = 0;
    int iNumero02 = 1;
    int iResultado = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o valor do 1� n�mero:  ";
    cin >> iNumero01;

    cout << "Digite o valor do 2� n�mero:  ";
    cin >> iNumero02;

    iResultado = iNumero01 / iNumero02;

    cout << " Resultado:  " << iResultado;


    return 0;
}
