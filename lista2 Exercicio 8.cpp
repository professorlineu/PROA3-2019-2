/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 2 Exercicio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

       float fpeso0 = 0;
       float fgrama = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Quantos quilos voc� pesa: ";
    cin >> fpeso0;

    fgrama = fpeso0 * 1000;


    cout<<"\nSeu peso em grama �; "<<fgrama;

    return 0;
}
