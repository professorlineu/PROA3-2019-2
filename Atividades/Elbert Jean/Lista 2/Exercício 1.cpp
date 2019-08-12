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
    int n1, n2, subtrai;
    // Recebe os dois números
    cin >> n1;
    cin >> n2;
    // Subtrai os números digitados
    subtrai = n1 - n2;
    // Mostra o resultado da subtração
    // \n - coloca o cursor na linha de baixo
    cout << "\n" << subtrai;
    // Para o programa a espera de um ENTER
    getch();
}
