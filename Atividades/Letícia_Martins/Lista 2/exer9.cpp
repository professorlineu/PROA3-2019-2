
/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Calculo da area de um trápezio
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

    cout << "Calcule a área de um trápezio: ";

    cout << "Valor da base menor: ";
    cin >> fbasemenor;

    cout << "Valor da base maior: ";
    cin >> fbasemaior;

    cout << "Valor da altura: ";
    cin >> faltura;


    farea= ((fbasemenor+fbasemaior)*faltura)/2;

    cout << "A area do trapezio é: " << farea<< endl;


    return 0;
}
