
/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Calculo de peso com porcentagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fVal = 0;
    float fVa2 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "O peso da pessoa em quilos  é : ";
    cin >> fVal;

    fVa2= fVal*1000;

    cout << "O peso da pessoa em gramas é: " << fVa2 << endl;


    return 0;
}
