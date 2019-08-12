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
    float Numero0, Numero1, Numero2, Numero3, Numero4, Numero5, Numero6, Numero7, Numero8, Numero9, Numero10, Numero11;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nQual o número você deseja ter a tabuada?: ";
    // Recebe um numero
    cin >> Numero0;
    Numero1 = Numero0 * 0 ;
    Numero2 = Numero0 * 1 ;
    Numero3 = Numero0 * 2 ;
    Numero4 = Numero0 * 3 ;
    Numero5 = Numero0 * 4 ;
    Numero6 = Numero0 * 5 ;
    Numero7 = Numero0 * 6 ;
    Numero8 = Numero0 * 7 ;
    Numero9 = Numero0 * 8 ;
    Numero10 = Numero0 * 9 ;
    Numero11 = Numero0 * 10;
    // Mostra o novo valor do produto
   cout << "\n" << Numero0 << " x 0 = " << Numero1;
   cout << "\n" << Numero0 << " x 0 = " << Numero2;
   cout << "\n" << Numero0 << " x 0 = " << Numero3;
   cout << "\n" << Numero0 << " x 0 = " << Numero4;
   cout << "\n" << Numero0 << " x 0 = " << Numero5;
   cout << "\n" << Numero0 << " x 0 = " << Numero6;
   cout << "\n" << Numero0 << " x 0 = " << Numero7;
   cout << "\n" << Numero0 << " x 0 = " << Numero8;
   cout << "\n" << Numero0 << " x 0 = " << Numero9;
   cout << "\n" << Numero0 << " x 0 = " << Numero10;
   cout << "\n" << Numero0 << " x 0 = " << Numero11;

    // Para o programa a espera de um ENTER
    getch();
}
