/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Comando \t - nova linha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "10\t20\t30" << endl;
    cout << "40\t50\t60" << endl;
    cout << "70\t80\t90" << endl;

    return 0;
}
