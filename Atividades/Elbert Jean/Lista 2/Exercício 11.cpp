/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule
e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float salario1, salario2;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do sal�rio
    cout << "\nQual � o seu sal�rio?: ";
    // Recebe o valor do peso
    cin >> salario1;
    // Calcula o novo valor do produt
    salario2 = salario1 / 954 ;
    // Mostra o novo valor do produto
    cout << "\nVoc� recebe " << salario2 << " sal�rios m�nimo ";
    // Para o programa a espera de um ENTER
    getch();
}
