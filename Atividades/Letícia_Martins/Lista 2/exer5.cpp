/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Calculo com desconto em porcentagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fVal = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite um valor: ";
    cin >> fVal;

    cout << "Desconto de 10%: " << fVal - (fVal * 0.1) << endl;

    return 0;
}
