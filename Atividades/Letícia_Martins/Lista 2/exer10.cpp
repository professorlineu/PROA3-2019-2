
/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Calculo da area de um quadrado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float flado1 = 0;
    float flado2 = 0;
    float farea = 0;

    setlocale(LC_ALL,"");

    system("color F1");

    cout << "Calcule a �rea de um quadrado: ";

    cout << "Valor do primeiro lado: ";
    cin >> flado1;

    cout << "Valor do segundo lado: ";
    cin >> flado2;

    farea= flado1*flado2;

    cout << "A area do quadrado �: " << farea<< endl;


    return 0;
}
