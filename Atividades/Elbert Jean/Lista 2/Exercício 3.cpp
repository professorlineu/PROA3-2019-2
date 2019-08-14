/**********************************************************
- Autor :  Elbert Jean
- Descrição: Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
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
    // Recebe os três números
    setlocale(LC_ALL,"");

    cout << "Insira o primeiro valor: ";
    cin >> fn1;
    cout << "Insira o segundo valor: ";
    cin >> fn2;
    cout << "Insira o terceiro valor: ";
    cin >> fn3;

    // Multiplica os números digitados
    fresultado = fn1 * fn2 * fn3;
    // Mostra o resultado da multiplicação
    // \n - coloca o cursor na linha de baixo
    cout << "\nO resultado da sua multiplicação é de " << fresultado;
    // Para o programa a espera de um ENTER
    getch();
}
