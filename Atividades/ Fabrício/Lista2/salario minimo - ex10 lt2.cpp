/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 10 - Quantos salarios minimos recebe
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fSmini = 0;
   float fSfunc = 0;
   float fQuant = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do sal�rio minimo: R$ ";
    cin >> fSmini;

    cout << "Digite o valor do sal�rio que recebe: R$ ";
    cin >> fSfunc;

    cout << endl;

    fQuant= fSfunc / fSmini;

    cout << "Quantidade de sal�rios minimos que recebe:" << fQuant << endl;


    return 0;
}
