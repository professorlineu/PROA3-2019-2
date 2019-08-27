/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int iNum = 0, i = 0;
    int iMult = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite um número: ";    // Recebe o valor do número
    cin >> iNum;

    while (i < 11)
    {
        iMult = i * iNum;
        cout << iNum << " X " << i << " = " << iMult << endl;
        i++;

    } // Fim do while

	return 0;
}
