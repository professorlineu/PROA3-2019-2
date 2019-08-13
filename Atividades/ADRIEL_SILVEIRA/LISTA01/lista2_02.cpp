/**********************************************************
- Autor:     Adriel Silveira
- Descrição: Multiplicação de valores
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fvalor1 = 0;
    float fvalor2 = 0;
    float fvalor3 = 0;
    float fmultiplica = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nInsira valor 1: ";
    cin >> fvalor1;

cout << " \nInsira valor 2: ";
    cin >> fvalor2;

    cout << "\ninsira valor 3: ";
    cin >> fvalor3 ;
    fmultiplica = fvalor1 * fvalor2 * fvalor3;
cout << "\nresultado da multiplicação = " <<fmultiplica;

getch();

    return 0;
}
