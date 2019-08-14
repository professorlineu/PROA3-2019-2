/**********************************************************
- Autor:     José Augusto
- Descrição: Subtração
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int n1= 0;
    int n2=0;
    int sub=0;

    cin >> n1;
    cin >> n2;


    sub = n1 - n2;

    cout << "\n =" << sub ;
    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
