/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int area1, resultado;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o lado do quadrado: ";
    // Recebe o valor do lado do quadrado
    cin >> area1;
    // Calcula o novo valor do produto
    resultado = area1 * area1;
    // Mostra o novo valor do produto
    cout << "\nValor da �rea do quadrado = " << resultado;
    // Para o programa a espera de um ENTER
    getch();
}
