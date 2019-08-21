/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 3 EX1
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fNota4 = 0;
    float fMedia = 0;

    setlocale(LC_ALL,"portuguese");
    system("color F3");

    cout << "informe a nota 1: ";
    cin >> fNota1;

    cout << "informe a nota 2: ";
    cin >> fNota2;

    cout << "informe a nota 3: ";
    cin >> fNota3;

    cout << "informe a nota 4: ";
    cin >> fNota4;

    fMedia = (fNota1+fNota2+fNota3+fNota4)/4;

    if (fMedia>=7)
    cout << "\n\n\nAprovado\n\n\n";

    else
    cout << "\n\n\nReprovado\n\n\n";


    return 0;
}
