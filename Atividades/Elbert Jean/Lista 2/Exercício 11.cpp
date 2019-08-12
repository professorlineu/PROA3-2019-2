/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.
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
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do salário
    cout << "\nQual é o seu salário?: ";
    // Recebe o valor do peso
    cin >> salario1;
    // Calcula o novo valor do produt
    salario2 = salario1 / 954 ;
    // Mostra o novo valor do produto
    cout << "\nVocê recebe " << salario2 << " salários mínimo ";
    // Para o programa a espera de um ENTER
    getch();
}
