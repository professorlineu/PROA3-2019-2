/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 10 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

           float fLado1 = 0;

           float fLado2 = 0;

           float fArea = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o lado 1:  ";
    cin >> fLado1;

    cout << "Digite o lado 2:  ";
    cin >> fLado2;

    fArea = fLado1 * fLado2;

    cout << "Area do Quadrado �:  " << fArea << endl;

    return 0;
}
