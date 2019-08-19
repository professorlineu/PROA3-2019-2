/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descriçăo: Lista 2 - Exercício 9 -  programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaraçăo de variáveis

    float fBMaior = 0;
    float fBMenor = 0;
    float fAltura = 0;
    float fArea = 0;

    //Configuraçăo da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Valor da base maior: ";
    cin >> fBMaior;

    cout << "Valor da base menor: ";
    cin >> fBMenor;

    cout << "Valor da altura: ";
    cin >> fAltura;

    //Calculo da área do trapézio

    fArea = ((fBMaior + fBMenor)* fAltura)/2 ;

    cout << "Valor da área do trapézio: " << fArea;


    return 0;
}
