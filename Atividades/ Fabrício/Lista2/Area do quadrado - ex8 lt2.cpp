/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 8 - �rea do quadrado em m�
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fLado1 = 0;
   float fLado2 = 0;
   float fArea  = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro lado: ";
    cin >> fLado1;

    cout << "Digite o segundo lado: ";
    cin >> fLado2;

    cout << endl;

    fArea = fLado1 * fLado2;

    cout << "�rea do quadrado = " << fArea << "m�" << endl;

    return 0;
}
