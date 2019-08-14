/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float fsal = 0;
    float fnovosal = 0 ;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite o preço do produto: ";
    // Recebe o produto
    cin >> fsal;
    // Calcula o novo valor do produto
    fnovosal = fsal - fsal * 10/100;
    // Mostra o novo valor do produto
    cout << "\nValor com Desconto de 10% = " << fnovosal;
    // Para o programa a espera de um ENTER
    getch();
}
