/**********************************************************
- Autor:     Adalberto Moura
- Descrição: lista 2 Exercicio 4
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

    cout << "Aumento de 10%: " << fVal * 1.1 << endl;
    cout << "Desconto de 10%: " << fVal - (fVal * 0.1) << endl;

    return 0;
}
