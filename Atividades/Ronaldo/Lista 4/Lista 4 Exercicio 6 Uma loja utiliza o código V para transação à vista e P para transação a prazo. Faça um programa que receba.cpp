/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Lista 4 - Exerc�cio 06 Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um programa que receba
o c�digo e o valor de quinze transa��es, calcule e mostre:
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
