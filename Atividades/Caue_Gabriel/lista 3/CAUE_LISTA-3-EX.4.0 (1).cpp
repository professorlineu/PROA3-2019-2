/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 3 - EX.4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fNum1 = 0;
    float fNum2 = 0;
    float fNum3 = 0;
    float fMaior = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1° Número: ";
    cin >> fNum1;

    cout << "\nDigite o 2° Número: ";
    cin >> fNum2;

    cout << "\nDigite o 3° Número: ";
    cin >> fNum3;


    if (fNum1 >= fNum2)
    {
        fMaior = fNum1;
    }
    else
    {
        fMaior = fNum2;
    }
    if (fNum3 >= fMaior)
    {
        fMaior = fNum3;
    }

    cout << "\nO Maior Número é: " << fMaior << endl;


    return 0;
}
