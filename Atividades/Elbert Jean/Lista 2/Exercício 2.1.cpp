/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    float fnota1 = 0;
    float fnota2 = 0;
    float fpeso1 = 0;
    float fpeso2 = 0;
    float fmedia = 0;
    // Limpa a tela
    system("cls");
    setlocale(LC_ALL,"");
    // Recebe as três notas e seus pesos
    cout << "Insira o valor da primeira nota: ";
    cin >> fnota1;
    cout << "Insira o valor da segunda nota: ";
    cin >> fnota2;
    cout << "Insira o valor do peso da primeira nota: ";
    cin >> fpeso1;
    cout << "Insira o valor do peso da segunda nota: ";
    cin >> fpeso2;


    // Calcula a média
    fmedia = (fnota1 * fpeso1 + fnota2 * fpeso2)/(fpeso1 + fpeso2);
    // Mostra o resultado da média
    // Formatando a saída para mostrar apenas duas casas decimais
    cout << "\nA média ponderada das notas é de " << fmedia;
    // Para o programa a espera de um ENTER
    getch();
}
