/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 7 - �rea do trap�zio em m�
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fBmaior = 0;
   float fBmenor = 0;
   float fAltura = 0;
   float fArea   = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a base maior: ";
    cin >> fBmaior;

    cout << "Digite a base menor: ";
    cin >> fBmenor;

    cout << "Digite a altura: ";
    cin >> fAltura;

    cout << endl;

    fArea = ((fBmaior + fBmenor) * fAltura)/2;


    cout << "�rea do trap�zio = " << fArea << "m�" << endl;

    return 0;
}
