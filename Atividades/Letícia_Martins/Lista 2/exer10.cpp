
/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Calculo da area de um quadrado
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

    cout << "Calcule a área de um quadrado: ";

    cout << "Valor do primeiro lado: ";
    cin >> flado1;

    cout << "Valor do segundo lado: ";
    cin >> flado2;

    farea= flado1*flado2;

    cout << "A area do quadrado é: " << farea<< endl;


    return 0;
}
