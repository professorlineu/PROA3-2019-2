
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
    float fVa3 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "O peso da pessoa � : ";
    cin >> fVal;

    fVa2= fVal+(fVal*0.15);
    fVa3= fVal-(fVal*0.20);

    cout << "A pessoa vai engordar 15%: " << fVa2 << endl;
    cout << "A pessoa ir� emagrecer 20% : " << fVa3 << endl;

    return 0;
}
