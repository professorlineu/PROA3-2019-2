/**********************************************************
- Autor :  Elbert Jean
- Descri��o: Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.
**********************************************************/


#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;
    float fresultado = 0;
    // Recebe os tr�s n�meros
    setlocale(LC_ALL,"");

    cout << "Insira o primeiro valor: ";
    cin >> fn1;
    cout << "Insira o segundo valor: ";
    cin >> fn2;
    cout << "Insira o terceiro valor: ";
    cin >> fn3;

    // Multiplica os n�meros digitados
    fresultado = fn1 * fn2 * fn3;
    // Mostra o resultado da multiplica��o
    // \n - coloca o cursor na linha de baixo
    cout << "\nO resultado da sua multiplica��o � de " << fresultado;
    // Para o programa a espera de um ENTER
    getch();
}
