/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 9 - �rea do losango em m�
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fDmaior = 0;
   float fDmenor = 0;
   float fArea  = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a diagonal maior: ";
    cin >> fDmaior;

    cout << "Digite a diagonal menor: ";
    cin >> fDmenor;

    cout << endl;

    fArea = (fDmaior * fDmenor)/2;

    cout << "�rea do losango = " << fArea << "m�" << endl;

    return 0;
}
