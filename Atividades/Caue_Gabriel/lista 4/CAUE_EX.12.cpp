/**********************************************************
- Autor:     CAUE GABRIEL
- Descri��o: LISTA 4 - EX.12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int i2 = 0;
    int iValor = 0;
    int iCont = 0;
    int iQuant = 0;
    int iNum = 0;

    // N�mero primo: divis�vel por 1 e por ele mesmo
    // N�mero de divisores � 2!


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 10)
    {
        cout << "\nDigite o n�mero >> ";
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
        cout << "\nA Quantidade de N�meros primos � >> " << iQuant << endl;
    }
    else
    {
        cout << "\nN�o tem n�meros primos! " << endl;
    }


    return 0;
}
