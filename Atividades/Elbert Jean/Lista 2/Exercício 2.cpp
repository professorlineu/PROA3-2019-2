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
    float nota1, nota2, soma, media;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    //Formata a sa�da para duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite as duas notas: ";
    // Recebe as duas notas
    cin >> nota1;
    cin >> nota2;
    // Soma as notas digitadas
    soma = nota1 + nota2;
    // Calcula a m�dia
    media = soma/2;
    // Mostra o resultado da m�dia
    cout << "\nM�dia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
