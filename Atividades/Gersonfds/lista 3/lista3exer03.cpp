/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista 3 exer.03
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int num01 = 0;
    int num02 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o 1° Número: ";
    cin >> num01;

    cout << "\nDigite o 2° Número: ";
    cin >> num02;

    if (num01 > num02)
    {
        cout << "\n<2° Número é o menor>\n"<<  num02;
    }
    else
    {
        cout << "\n<1° Número é o menor>\n"<< num01 << endl;
    }



    return 0;
}
