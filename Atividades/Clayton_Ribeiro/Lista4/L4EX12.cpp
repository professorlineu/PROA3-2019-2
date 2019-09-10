/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    int iNum = 0;

    int iTestePrimo = 0;
    int iContaPrimo = 0;
    int iContaDivPrimo = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 10)
    {
        cout << "\nDigite um número: ";    // Recebe o valor do número
        cin >> iNum;

        i++;


        iTestePrimo = iNum;

        while (iTestePrimo <= iNum && iTestePrimo >= 1)       //Condição para ser primo
        {
            if (iNum % iTestePrimo == 0)
            {
                iContaDivPrimo++;
            }

            iTestePrimo--;

        }       //Fim da condição para ser primo


        if (iContaDivPrimo == 2)       //Contagem dos primos após a condição
        {
            iContaPrimo++;
        }

        iContaDivPrimo = 0;


    } // Fim do while

    cout << "Quantidade de números primos é: " << iContaPrimo << endl;

	return 0;
}
