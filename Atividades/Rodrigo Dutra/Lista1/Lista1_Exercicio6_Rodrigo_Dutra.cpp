/**********************************************************
- Autor:     Rodrigo D.Silva
- Descri��o: Pular linha
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
    cout << "Rodrigo" << endl;
    cout << "Dutra" << endl;

    return 0;
}
