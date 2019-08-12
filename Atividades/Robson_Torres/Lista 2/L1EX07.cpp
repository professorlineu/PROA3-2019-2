/**********************************************************
- Autor:     Robson Torres
- Descrição: Comando \t - nova linha
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
    cout << "10 20 30 " << endl;

    cout << "40 50 60 " <<  endl;

    cout << "60 70 80 " << endl;


    return 0;
}
