/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exerciocio proposto 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
 int ipeso = 0;
 int ipesocal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o peso da pessoa: ";
    cin >> ipeso;

    ipesocal = ipeso * 1000;

    cout <<"o preso da pessoa em gramas �: " <<ipesocal;



    return 0;
}
