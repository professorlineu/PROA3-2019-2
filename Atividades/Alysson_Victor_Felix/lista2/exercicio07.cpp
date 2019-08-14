/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exerciocio proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
 int ipeso = 0;
 int ipesoengordar = 0;
 int ipesoemagrecer = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o peso da pessoa: ";
    cin >> ipeso;

    ipesoengordar = ipeso + (ipeso * 0.15);

    cout << "\nengordou 15%: " <<ipesoengordar;

    ipesoemagrecer = ipeso - (ipeso * 0.20);

    cout << "\nemagreceu 20%: " << ipesoemagrecer;

    return 0;
}
