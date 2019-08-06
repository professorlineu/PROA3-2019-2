/**********************************************************
- Autor:     Adalberto
             José de Moura
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
    cout << "Hoje é aula de Programação!";

    return 0;

}
