/**********************************************************
- Autor: Elbert Jean
- Descri��o: Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.
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
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o sal�rio do funcion�rio: ";
    // Recebe o produto
    cin >> sal;
    // Calcula o novo valor do produto
    cout << "\nDigite o total de vendas feito pelo vendedor: ";
    // Recebe o total de vendas
    cin >> comis;
    // colocar o valor da comiss�o
    novosal = sal + comis * 04/100;
    // Mostra o novo valor do produto
    cout << "\nSal�rio do funcion�rio com comiss�o = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
