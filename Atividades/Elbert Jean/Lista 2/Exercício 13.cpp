/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fNumero0 = 0;
    float fNumero1 = 0;
    float fNumero2 = 0;
    float fNumero3 = 0;
    float fNumero4 = 0;
    float fNumero5 = 0;
    float fNumero6 = 0;
    float fNumero7 = 0;
    float fNumero8 = 0;
    float fNumero9 = 0;
    float fNumero10 = 0;
    float fNumero11 = 0;

    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nQual o número você deseja ter a tabuada?: ";
    // Recebe um numero
    cin >> fNumero0;
    fNumero1 = fNumero0 * 0 ;
    fNumero2 = fNumero0 * 1 ;
    fNumero3 = fNumero0 * 2 ;
    fNumero4 = fNumero0 * 3 ;
    fNumero5 = fNumero0 * 4 ;
    fNumero6 = fNumero0 * 5 ;
    fNumero7 = fNumero0 * 6 ;
    fNumero8 = fNumero0 * 7 ;
    fNumero9 = fNumero0 * 8 ;
    fNumero10 = fNumero0 * 9 ;
    fNumero11 = fNumero0 * 10;
    // Mostra o novo valor do produto
   cout << "\n" << fNumero0 << " x 0 = " << fNumero1;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero2;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero3;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero4;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero5;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero6;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero7;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero8;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero9;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero10;
   cout << "\n" << fNumero0 << " x 0 = " << fNumero11;

    // Para o programa a espera de um ENTER
    getch();
}
