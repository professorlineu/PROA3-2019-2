/**********************************************************
- Autor:     Jader Oliveira
- Descri��o: Lista 2 EX9
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fBaseMa = 0;
    float fBaseMe = 0;
    float fAltura = 0;
    float fArea = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "veja s�, calcule a �rea de um trap�zio!!" << endl;

    cout << "digite o valor da base maior: ";
    cin >> fBaseMa;

    cout << "digite o valor da base menor: ";
    cin >> fBaseMe;

    cout << "digite o valor da altura: ";
    cin >> fAltura;

    fArea = ((fBaseMa-fBaseMe)*fAltura)/2;

    cout << "a �rea do trap�zio �: " << fArea;
}
