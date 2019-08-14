/**********************************************************
- Autor :  Elbert Jean
- Descrição: Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
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

    // Recebe os dois números
    cout << "insira o primeiro número: ";
    cin >> fN1;
    cout << "insira o segundo número: ";
    cin >> fN2;
    // Subtrai os números digitados
    fResultado = fN1 - fN2;
    // Mostra o resultado da subtração
    // \n - coloca o cursor na linha de baixo
    cout << "\nO resultado da sua subtração é " << fResultado;
    // Para o programa a espera de um ENTER
    getch();
}
