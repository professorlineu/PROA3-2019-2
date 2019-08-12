/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal
menor)/2.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float diag1, diag2, resultado;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o valor da diagonal maior: ";
    // Recebe o valor do lado do quadrado
    cin >> diag1;
    // Calcula o novo valor do produto
    cout << "\nDigite o valor da diagonal menor: ";
    // Recebe o valor do lado do quadrado
    cin >> diag2;
    // Calcula o novo valor do produto
    resultado = (diag1 * diag2)/2;
    // Mostra o novo valor do produto
    cout << "\nValor da área do losango = " << resultado;
    // Para o programa a espera de um ENTER
    getch();
}
