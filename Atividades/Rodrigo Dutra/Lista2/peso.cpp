/**********************************************************
- Autor: Rodrigo D.Silva
- Descri��o: Peso
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fpeso0 = 0;
    float fpeso1 = 0;
    float fpeso2 = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do produto
    cout << "\nQuantos quilos voc� pesa?: ";
    // Recebe o valor do peso
    cin >> fpeso0;
    // Calcula o novo valor do produto
    fpeso1 = fpeso0 + fpeso0 * 15/100;
    fpeso2 = fpeso0 - fpeso0 * 20/100;
    // Mostra o novo valor do produto
    cout << "\nse engordar 15%, voc� vai pesar = " << fpeso1 << "Kg ";
    cout << "\nse emagrecer 20%, voc� vai pesar " << fpeso2 <<"Kg ";
    // Para o programa a espera de um ENTER
    getch();
}
