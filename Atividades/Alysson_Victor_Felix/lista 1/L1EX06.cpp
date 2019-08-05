/**********************************************************
- Autor:     Alysson Victor
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
    cout << "Alysson\tVictor\tFelix!";

    return 0;
}
