/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 3 - Recebe um pre�o e d� desconto de 10%
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fNum1 = 0;
   float fDesc = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do produto:R$ ";
    cin >> fNum1;

    fDesc = fNum1 - (fNum1 * 0.1);

    cout << "Valor final do produto com 10% de desconto:R$ " << fDesc;


    return 0;
}
