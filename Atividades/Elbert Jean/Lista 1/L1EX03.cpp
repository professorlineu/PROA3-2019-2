/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Comando \n - nova linha
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
    cout << "Hoje � aula de Programa��o!\n";

    return 0;
}
