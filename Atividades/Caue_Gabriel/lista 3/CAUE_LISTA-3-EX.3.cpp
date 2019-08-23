/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 3 - EX.3
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


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1° Número: ";
    cin >> fNum1;

    cout << "\nDigite o 2° Número: ";
    cin >> fNum2;

    if (fNum1 > fNum2)
    {
        cout << "\n<2° Número é o menor>\n";
    }
    else
    {
        cout << "\n<1° Número é o menor>\n" << endl;
    }



    return 0;
}
