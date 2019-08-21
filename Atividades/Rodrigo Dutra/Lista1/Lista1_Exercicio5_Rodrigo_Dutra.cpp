/**********************************************************
- Autor:     Rodrigo D.Silva
- Descrição: Comando mostre na tela
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
    cout << "Rodrigo Dutra da Silva" << endl;

    return 0;
}
