/**********************************************************
- Autor:     Jader Oliveira
- Descri��o: Lista 3 EX2
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //declara��o de vari�veis
    float fNota1 = 0;
    float fNota2 = 0;
    float fMedia = 0;

    setlocale(LC_ALL,"portuguese");
    system("color F3");

    cout << "informe a nota 1: ";
    cin >> fNota1;

    cout << "informe a nota 2: ";
    cin >> fNota2;

    fMedia = (fNota1+fNota2)/2;

    if (fMedia>=7)
    cout << "\nAprovado";

    else if (fMedia<3)
    cout << "\nReprovado";

    else
        cout << "\nExame";


}
