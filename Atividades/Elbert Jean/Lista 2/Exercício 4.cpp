/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, novosal;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o pre�o do produto: ";
    // Recebe o produto
    cin >> sal;
    // Calcula o novo valor do produto
    novosal = sal - sal * 10/100;
    // Mostra o novo valor do produto
    cout << "\nValor com Desconto de 10% = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
