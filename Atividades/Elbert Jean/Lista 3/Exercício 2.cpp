/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba duas notas, calcule e mostre a m�dia aritm�tica e a mensagem que se encontra
na tabela a seguir:
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fn1 = 0;
    float fn2 = 0;
    float fresultado = 0;

    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn1;
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn2;

    fresultado = (fn1 + fn2 )/2;

    cout << "\nA m�dia das suas notas � de " << fresultado;
    // Para o programa a espera de um ENTER


   if (fresultado >= 7)
{

        cout << "\nAPROVADO!!!!";

}
    else if (fresultado >= 3)
    {
        cout << "\nEXAME!!!!";
    }
    else
{

        cout << "\nREPROVADO!!!!";

        getch();
        return 0;
}
}
