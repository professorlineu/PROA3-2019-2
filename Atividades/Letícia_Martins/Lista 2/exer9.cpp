
/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Calculo da area de um tr�pezio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fbasemenor = 0;
    float fbasemaior = 0;
    float faltura = 0;
    float farea = 0;

    setlocale(LC_ALL,"");

    system("color F1");

    cout << "Calcule a �rea de um tr�pezio: ";

    cout << "Valor da base menor: ";
    cin >> fbasemenor;

    cout << "Valor da base maior: ";
    cin >> fbasemaior;

    cout << "Valor da altura: ";
    cin >> faltura;


    farea= ((fbasemenor+fbasemaior)*faltura)/2;

    cout << "A area do trapezio �: " << farea<< endl;


    return 0;
}
