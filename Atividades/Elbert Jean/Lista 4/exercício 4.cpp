/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
Exemplo: Digite um n�mero: 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int i = 0; //Declara��o de vari�veis
    int iValor = 0; //Declara��o de vari�veis
    int iMult = 0; //Declara��o de vari�veis

    setlocale(LC_ALL,""); //Configura��o da tela de sa�da
    system("color F1"); // limpa a tela

    cout << "\nInsira o n�mero que voc� deseja a tabuada ";
    cin >> iValor;

    while (i <=10) //C�digo do programa

    {
        cout << iValor << " x " << i << " = " << iMult << "\n";
        i = i + 1;

        iMult = i * iValor;


    } // fim do while / la�o


    return 0;
}
