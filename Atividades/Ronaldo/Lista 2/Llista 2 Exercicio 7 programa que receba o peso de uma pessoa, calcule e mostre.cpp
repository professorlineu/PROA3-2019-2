/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Lista 2 - Exerc�cio 7 - Fa�a um programa que receba o peso de uma pessoa, calcule e mostre:
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
    //Declara��o de vari�veis

        float fPeso = 0;
        float fEngordar = 0;
        float fEmagrecer = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite seu peso: ";
    cin >> fPeso;

    fEngordar = fPeso + (fPeso*0.15);
    fEmagrecer = fPeso - (fPeso*0.2);

    cout << "Se voc� engordar 15% do peso: " << fEngordar << endl;

    cout << "Se voc� emagrecer 20% do peso:  " << fEmagrecer;


    getch() ;

    return 0;
}
