/**********************************************************
- Autor:     Cau� Gabriel
- Descri��o: Comando \t - nova linha
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
    cout << "11\t22" << endl;
    cout << "33\t44" << endl;

    return 0;
}
