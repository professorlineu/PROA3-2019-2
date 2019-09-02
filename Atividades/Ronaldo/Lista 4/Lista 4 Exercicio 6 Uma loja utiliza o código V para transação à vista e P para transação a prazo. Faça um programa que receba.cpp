/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Lista 4 - Exercício 06 Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
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


    while (iNum < 10)
    {
     iNum++;

        cout << "\nTabuada do: " << iNum << endl;

        while (i < 11)
        {
            iMult = i * iNum;
            cout << iNum << " X " << i << " = " << iMult << endl;
            i++;

        } // Fim do while "i"

        i=0;

    } // Fim do while "iNum"


	return 0;
}
