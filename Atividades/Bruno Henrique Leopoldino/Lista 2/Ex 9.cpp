/**********************************************************
- Autor:     Bruno Henrique
- Descri��o: Desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fBaseMaior=0;
    float fBaseMenor=0;
    float fAltura=0;
    float fArea=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F5");

    //C�digo do programa

    cout << "Digite base maior:  ";
    cin >> fBaseMaior;

    cout << "Digite base menor:  ";
    cin  >> fBaseMenor;

    cout << "Digite altura:  ";
    cin >> fAltura;

    fArea = (fBaseMaior + fBaseMenor)*fAltura/2;

    cout << "Sua Ar�a �:  " << fArea;


    return 0;
}
