/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 4 - Exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    int iNum = 0;
    int iSomaPares = 0, iSomaPrimos = 0;

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

        if ()       //Condição para ser primo (Não terminei ainda)
        {
            iSomaPrimos += iNum;
        }


    } // Fim do while

    cout << "A soma dos números pares é: " << iSomaPares << endl;

    cout << "A soma dos números primos é: " << iSomaPrimos << endl;

	return 0;
}
