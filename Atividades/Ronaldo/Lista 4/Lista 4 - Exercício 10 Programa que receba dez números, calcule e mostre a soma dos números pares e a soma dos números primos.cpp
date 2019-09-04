/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Lista 4 - Exerc�cio 10 Programa que receba dez n�meros, calcule e mostre a soma dos n�meros pares e a soma dos
n�meros primos
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
        cout << "\nDigite um n�mero: ";    // Recebe o valor do n�mero
        cin >> iNum;

        i++;

        if (iNum % 2 == 0)      //Condi��o para ser par
        {
            iSomaPares += iNum;
        }


        iTestePrimo = iNum;

        while (iTestePrimo <= iNum && iTestePrimo >= 1)       //Condi��o para ser primo
        {
            if (iNum % iTestePrimo == 0)
            {
                iContaPrimo++;
            }

            iTestePrimo --;

        }       //Fim da condi��o para ser primo


        if (iContaPrimo == 2)       //Soma dos primos ap�s a condi��o
        {
            iSomaPrimos += iNum;
        }

        iContaPrimo = 0;


    } // Fim do while

    cout << "A soma dos n�meros pares �: " << iSomaPares << endl;

    cout << "A soma dos n�meros primos �: " << iSomaPrimos << endl;

	return 0;
}
