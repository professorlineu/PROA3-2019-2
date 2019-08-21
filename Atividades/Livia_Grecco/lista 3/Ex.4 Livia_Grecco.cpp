/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 3 - Ex. 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0;
    float fNum3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o número 1: ";
    cin >> fNum1;

    cout << "Insira o número 2: ";
    cin >> fNum2;

    cout << "Insira o número 3: ";
    cin >> fNum3;

    if (fNum1 > fNum2 && fNum1 > fNum3)
    cout << " o primeiro número é maior";

    else if (fNum2 > fNum3 && fNum2 > fNum1)
    cout << "o segundo número é maior";

    else
    cout << "o terceiro número é maior";



    getch();

    return 0;
}
