/**********************************************************
- Autor :  Elbert Jean
- Descri��o: Fa�a um programa que receba duas notas, calcule e mostre a m�dia ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda.
**********************************************************/


#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float fnota1 = 0;
    float fnota2 = 0;
    float fmedia = 0;

    // Ativa acentua��o
    setlocale(LC_ALL,"");
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite o valor da primeira nota: ";
    cin >> fnota1;
    cout << "\nDigite o valor da segunda nota: ";
    cin >> fnota2;
    // Soma as notas digitadas
    fmedia = (fnota1 + fnota2)/2;
    // Calcula a m�dia
    cout << "\nA m�dia das notas � de = " << fmedia;
    // Para o programa a espera de um ENTER
    getch();
}
