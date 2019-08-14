/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fbase1 = 0;
    float fbase2 = 0;
    float faltura = 0;
    float fresultado = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nDigite a base maior: ";
    // Recebe o valor do lado do quadrado
    cin >> fbase1;
    // Calcula o novo valor do produto
    cout << "\nDigite o base menor: ";
    // Recebe o valor do lado do quadrado
    cin >> fbase2;
    // Calcula o novo valor do produto
    cout << "\nDigite a altura do trapézio: ";
    // Recebe o valor do lado do quadrado
    cin >> faltura;
    // Calcula o novo valor do produto
    fresultado = ((fbase1 + fbase2) * faltura/2);
    // Mostra o novo valor do produto
    cout << "\nValor da área do trapézio = " << fresultado;
    // Para o programa a espera de um ENTER
    getch();
}
