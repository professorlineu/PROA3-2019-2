/**********************************************************
- Autor:        Bruno Henrique
- Descrição: Comando \n - nova linha
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
    cout << "Aula de Automação!
    \n";

    return 0;
}
