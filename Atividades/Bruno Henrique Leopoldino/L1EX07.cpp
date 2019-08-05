/**********************************************************
- Autor:     Bruno Henrique
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
    cout << " 10 \ t 20 \ t 30 \ n " ;
    cout << " 40 \ t 50 \ t 60 \ n " ;
    cout << " 70 \ t 80 \ t 90 " << endl;

    return 0;
}
