/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Calculo com porcentagem
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

    cout << "Digite o valor do sal�rio : ";
    cin >> fVal;
    cout << "Digite o valor da comiss�o : ";
    cin >> fVa2;

    cout << "Comiss�o 4%: " << fVa2 * 1.04 << endl;
    cout << "Sal�rio total : " << fVal + (fVa2 * 0.1) << endl;

    return 0;
}
