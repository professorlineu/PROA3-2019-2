/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fbasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;
    float fareatrapez = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor da base maior �: ";
    cin >> fbasemaior;

    cout << "O valor da base menor �: ";
    cin >> fbasemenor;

    cout << "O valor da altura �: ";
    cin >> faltura;

    fareatrapez = ((fbasemaior + fbasemenor) * faltura) / 2;

    cout << "O valor da area do trapezio �: " << fareatrapez;



    return 0;
}
