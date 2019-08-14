/**********************************************************
- Autor:Bruno Henrique
- Descrição: Subtração
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int N1=0;
    int N2=0;
    int Sub=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
cout << "Digite o valor do primeiro numero  ";
cin >> N1;

cout << "Digite o valor do segundo numero  ";
cin >> N2;

Sub=N1-N2;
cout << "\n" << Sub;
    return 0;
}
