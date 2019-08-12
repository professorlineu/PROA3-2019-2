/**********************************************************
- Autor: Elbert Jean
- Descrição: Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal,comis, novosal;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o salário do funcionário: ";
    // Recebe o produto
    cin >> sal;
    // Calcula o novo valor do produto
    cout << "\nDigite o total de vendas feito pelo vendedor: ";
    // Recebe o total de vendas
    cin >> comis;
    // colocar o valor da comissão
    novosal = sal + comis * 04/100;
    // Mostra o novo valor do produto
    cout << "\nSalário do funcionário com comissão = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
