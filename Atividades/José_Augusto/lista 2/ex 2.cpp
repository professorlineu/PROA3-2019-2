/**********************************************************
- Autor:     José Augusto
- Descrição: Multiplicação
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    int multiplica=0;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    multiplica = n1 * n2 * n3;

    cout << "\n" << multiplica;

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
