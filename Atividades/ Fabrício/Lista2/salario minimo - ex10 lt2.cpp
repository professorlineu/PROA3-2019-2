/*******************************************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 10 - Quantos salarios minimos recebe e sobras
********************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
   int  iSmini = 0;
   int  iSfunc = 0;
   int  iQuant = 0;
   int iQuant1 = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do sal�rio minimo: R$ ";
    cin >> iSmini;

    cout << "Digite o valor do sal�rio que recebe: R$ ";
    cin >> iSfunc;

    cout << endl;

    iQuant  = iSfunc / iSmini;
    iQuant1  = iSfunc % iSmini;

    cout << "Quantidade de sal�rios minimos que recebe: " << iQuant << endl;
    cout << endl;
    cout << "Valor da sobra: R$ " << iQuant1  << endl;


    return 0;
}
