/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Comando cout
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << " Alysson\nVictor\n Felix!";

    return 0;
}
