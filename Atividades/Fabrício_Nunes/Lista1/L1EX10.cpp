/**********************************************************
- Autor: Fabrício Nunes
- Descrição: Comando do nome em uma linha e sobre nome em outra
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
    cout << "FABRÍCIO" << endl << endl;
    cout << "NUNES DE ALVARENGA" << endl;

    return 0;
}
