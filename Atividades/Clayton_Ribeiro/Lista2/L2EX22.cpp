/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 22
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int  i_NumLados = 0, i_NumDiagon = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o número de lados do polígono: "; // Recebe valor do número de lados do polígono
    cin >> i_NumLados;

    i_NumDiagon = (i_NumLados * (i_NumLados - 3) / 2); //Calcula o número de diagonais do polígono

    cout << "\nO número de diagonais do polígono é: " << i_NumDiagon;

	return 0;
}
