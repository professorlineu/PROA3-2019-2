/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista 3 exer.04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fnum01 = 0;
    float fnum02 = 0;
    float fnum03 = 0;
    float fMaior = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1° Número: ";
    cin >> fnum01;

    cout << "\nDigite o 2° Número: ";
    cin >> fnum02;

    cout << "\nDigite o 3° Número: ";
    cin >> fnum03;


    if (fnum01 >= fnum02)
    {
        fMaior = fnum01;
    }
    else
    {
        fMaior = fnum02;
    }
    if (fnum03 >= fMaior)
    {
        fMaior = fnum03;
    }

    cout << "\nO Maior Número é: " << fMaior << endl;


    return 0;
}
