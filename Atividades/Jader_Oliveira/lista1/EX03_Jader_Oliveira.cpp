/**********************************************************
- Autor:     Jader Oliveira
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
    cout << "10 20 30" << endl;
    cout << "40 50 60" << endl;
    cout << "70 80 90" << endl;

    return 0;
}
