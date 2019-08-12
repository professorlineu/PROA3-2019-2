/**********************************************************
- Autor :  Elbert Jean
- Descrição: Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
**********************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int n1, n2, n3, multiplica;
    // Recebe os três números
    cin >> n1;
    cin >> n2;
    cin >> n3;
    // Multiplica os números digitados
    multiplica = n1 * n2 * n3;
    // Mostra o resultado da multiplicação
    // \n - coloca o cursor na linha de baixo
    cout << "\n" << multiplica;
    // Para o programa a espera de um ENTER
    getch();
}
