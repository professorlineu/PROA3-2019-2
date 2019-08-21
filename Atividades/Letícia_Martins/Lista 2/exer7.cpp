
/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Calculo com porcentagem
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

    cout << "O peso da pessoa é : ";
    cin >> fVal;

    fVa2= fVal+(fVal*0.15);
    fVa3= fVal-(fVal*0.20);

    cout << "A pessoa vai engordar 15%: " << fVa2 << endl;
    cout << "A pessoa irá emagrecer 20% : " << fVa3 << endl;

    return 0;
}
