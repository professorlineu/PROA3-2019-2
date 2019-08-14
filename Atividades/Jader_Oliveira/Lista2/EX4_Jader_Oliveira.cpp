/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX4 - média ponderada
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fnota1 = 0;
    float fnota2 = 0;
    float fmedia = 0;

    cout << "digite a nota 1: ";
    cin >> fnota1;

    cout << "digite a nota 2: ";
    cin >> fnota2;

    fmedia = (fnota1*0.2)+(fnota2*0.3);

    cout << "sua media e: " << fmedia;

    return 0;

}
