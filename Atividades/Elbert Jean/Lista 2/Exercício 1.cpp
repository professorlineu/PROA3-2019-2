/**********************************************************
- Autor :  Elbert Jean
- Descri��o: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.
**********************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    float fN1 = 0;
    float fN2 = 0;
    float fResultado = 0;

    setlocale(LC_ALL,"");

    // Recebe os dois n�meros
    cout << "insira o primeiro n�mero: ";
    cin >> fN1;
    cout << "insira o segundo n�mero: ";
    cin >> fN2;
    // Subtrai os n�meros digitados
    fResultado = fN1 - fN2;
    // Mostra o resultado da subtra��o
    // \n - coloca o cursor na linha de baixo
    cout << "\nO resultado da sua subtra��o � " << fResultado;
    // Para o programa a espera de um ENTER
    getch();
}
