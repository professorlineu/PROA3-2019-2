/**********************************************************
- Autor:     Rodrigo D.SILVA
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
    cout << "40\t50\t50" << endl;
    cout << "60\t70\t80" << endl;

    return 0;
}
