/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX9
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

    cout << "veja só, calcule a área de um trapézio!!" << endl;

    cout << "digite o valor da base maior: ";
    cin >> fBaseMa;

    cout << "digite o valor da base menor: ";
    cin >> fBaseMe;

    cout << "digite o valor da altura: ";
    cin >> fAltura;

    fArea = ((fBaseMa-fBaseMe)*fAltura)/2;

    cout << "a área do trapézio é: " << fArea;
}
