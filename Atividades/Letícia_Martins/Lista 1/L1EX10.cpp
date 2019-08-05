/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comando cout
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
    cout << "Letícia\nda Silva\nMartins!";

    return 0;
}
