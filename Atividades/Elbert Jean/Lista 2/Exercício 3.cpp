/**********************************************************
- Autor :  Elbert Jean
- Descri��o: Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.
**********************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int n1, n2, n3, multiplica;
    // Recebe os tr�s n�meros
    cin >> n1;
    cin >> n2;
    cin >> n3;
    // Multiplica os n�meros digitados
    multiplica = n1 * n2 * n3;
    // Mostra o resultado da multiplica��o
    // \n - coloca o cursor na linha de baixo
    cout << "\n" << multiplica;
    // Para o programa a espera de um ENTER
    getch();
}
