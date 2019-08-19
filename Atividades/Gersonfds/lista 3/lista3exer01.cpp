/**********************************************************
- Autor:     Gerson flores de Souza
- Descrição: lista3 exer01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int inota01 = 0;
    int inota02 = 0;
    int inota03 = 0;
    int inota04 = 0;
    int iResultado=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite a nota 01: ";
    cin >> inota01;

    cout << "digite a nota 02: ";
    cin >> inota02;

    cout << "digite a nota 03: ";
    cin >> inota03;

    cout << "digite a nota 04: ";
    cin >> inota04;


    iResultado = (inota01 + inota02 + inota03 + inota04) /4;


    if (iResultado >= 6)
    {
        cout << "aprovado!" << endl;
    }
    else
    {
        cout << "reprovado!" << endl;
    }


    return 0;
}
