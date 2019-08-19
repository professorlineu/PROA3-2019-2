/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Lista 2 - Exercício 7 - Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    //Declaração de variáveis

        float fPeso = 0;
        float fEngordar = 0;
        float fEmagrecer = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite seu peso: ";
    cin >> fPeso;

    fEngordar = fPeso + (fPeso*0.15);
    fEmagrecer = fPeso - (fPeso*0.2);

    cout << "Se você engordar 15% do peso: " << fEngordar << endl;

    cout << "Se você emagrecer 20% do peso:  " << fEmagrecer;


    getch() ;

    return 0;
}
