/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 5 - Calcula o sal�rio mais porcentagem em cima das vendas
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fSala = 0;
   float fVend = 0;
   float fComi = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do sal�rio:R$ ";
    cin >> fSala;

    cout << "Digite o valor das vendas:R$ ";
    cin >> fVend;

    fComi = fVend * 0.04;

    cout << "Valor da comiss�o de 4%:R$ " << fComi << endl;

    cout << "Valor do sal�rio final (sal�rio + comiss�o):R$ " << fComi + fSala;


    return 0;
}
