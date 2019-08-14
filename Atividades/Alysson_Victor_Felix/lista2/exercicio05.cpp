/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exerciocio proposto 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
 int ipeso = 0;
 int ipesocal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o peso da pessoa: ";
    cin >> ipeso;

    ipesocal = ipeso * 1000;

    cout <<"o preso da pessoa em gramas é: " <<ipesocal;



    return 0;
}
