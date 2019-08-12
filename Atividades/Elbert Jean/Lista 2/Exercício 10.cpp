/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float peso0, peso1, peso2;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nQuantos quilos você pesa?: ";
    // Recebe o valor do peso
    cin >> peso0;
    // Calcula o novo valor do produto
    peso1 = peso0 + peso0 * 15/100;
    peso2 = peso0 - peso0 * 20/100;
    // Mostra o novo valor do produto
    cout << "\nse engordar 15%, você vai pesar = " << peso1 << "Kg ";
    cout << "\nse emagrecer 20%, você vai pesar " << peso2 <<"Kg ";
    // Para o programa a espera de um ENTER
    getch();
}
