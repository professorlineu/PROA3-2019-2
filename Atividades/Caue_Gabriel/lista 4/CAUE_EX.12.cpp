/**********************************************************
- Autor:     CAUE GABRIEL
- Descrição: LISTA 4 - EX.12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int i2 = 0;
    int iValor = 0;
    int iCont = 0;
    int iQuant = 0;
    int iNum = 0;

    // Número primo: divisível por 1 e por ele mesmo
    // Número de divisores é 2!


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (i < 10)
    {
        cout << "\nDigite o número >> ";
        cin >> iValor;

        i++;

        i2 = iValor;

        while (i2 <= iValor && i2 >= 1)
        {
            if (iValor % i2 == 0)
            {
                iCont++;
            }

            i2 --;
        }

            if (iCont == 2)
            {
                iQuant++;
            }

        iCont = 0;
    }

    if (iQuant != 0)
    {
        cout << "\nA Quantidade de Números primos é >> " << iQuant << endl;
    }
    else
    {
        cout << "\nNão tem números primos! " << endl;
    }


    return 0;
}
