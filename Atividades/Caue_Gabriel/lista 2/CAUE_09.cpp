/**********************************************************
- Autor:     Caue Gabriel
- Descri��o: Lista 2 - Exercicio 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fBaseMaior = 0;
    float fBaseMenor = 0;
    float fAltura = 0;
    float fArea = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color B1");

    //C�digo do programa

    cout << "Digite o valor da base maior do trap�zio:  ";
    cin >> fBaseMaior;

    cout << "Digite o valor da base menor:  ";
    cin >> fBaseMenor;

    cout << "Digite o valor da altura:  ";
    cin >> fAltura;

    fArea = ((fBaseMaior + fBaseMenor) * fAltura)/2;

    cout << "A Ar�a do trap�zio � igual �:  " << fArea << endl;

    return 0;
}
