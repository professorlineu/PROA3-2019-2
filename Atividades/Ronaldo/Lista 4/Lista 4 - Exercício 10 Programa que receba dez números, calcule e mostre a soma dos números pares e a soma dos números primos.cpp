/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Lista 4 - Exercício 10 Programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    int iNum = 0;
    int iSomaPares = 0;
    int iSomaPrimos = 0;

    int iTestePrimo = 0;
    int iContaPrimo = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 10)
    {
        cout << "\nDigite um número: ";    // Recebe o valor do número
        cin >> iNum;

        i++;

        if (iNum % 2 == 0)      //Condição para ser par
        {
            iSomaPares += iNum;
        }


        iTestePrimo = iNum;

        while (iTestePrimo <= iNum && iTestePrimo >= 1)       //Condição para ser primo
        {
            if (iNum % iTestePrimo == 0)
            {
                iContaPrimo++;
            }

            iTestePrimo --;

        }       //Fim da condição para ser primo


        if (iContaPrimo == 2)       //Soma dos primos após a condição
        {
            iSomaPrimos += iNum;
        }

        iContaPrimo = 0;


    } // Fim do while

    cout << "A soma dos números pares é: " << iSomaPares << endl;

    cout << "A soma dos números primos é: " << iSomaPrimos << endl;

	return 0;
}
