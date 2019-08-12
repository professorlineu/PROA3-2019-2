/*********************************
- Autor: Fabrício Nunes
- Descrição: comando \t - Nova Linha
*********************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color E9");

    //código do programa
    cout << "10\t20\t30\n";
    cout << "40\t50\t60\n";
    cout << "70\t80\t90\n";

    return 0;
}
